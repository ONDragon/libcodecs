// TarRegister.cpp

#include "StdAfx.h"

#include "../../Common/RegisterArc.h"

#include "TarHandler.h"
static IInArchive *CreateArc() { return new NArchive::NTar::CHandler; }
#ifndef EXTRACT_ONLY
static IOutArchive *CreateArcOut() { return new NArchive::NTar::CHandler; }
#else
#define CreateArcOut 0
#endif

static CArcInfo g_ArcInfo =
{ ".tar", { 'u', 's', 't', 'a', 'r' }, 5, CreateArc, CreateArcOut };

REGISTER_ARC(tar)
