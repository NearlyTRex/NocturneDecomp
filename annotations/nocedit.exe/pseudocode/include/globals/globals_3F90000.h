#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SEdgeData.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F90000
// =============================================================================

extern PALETTEENTRY g_DDPaletteBuffer[256];
extern CVector3f DAT_03f95df8[200];
extern int g_InputBuffer[20];
extern int g_MessageFlags[513];
extern WNDPROC g_WindowMessageHandlers[4];
extern SRenderVertex g_ClipVertexBufferStage2[32];
extern SRenderVertex g_ClipVertexBufferStage1[32];
extern SRenderVertex g_ClipVertexBufferStage3[32];
extern SRenderVertex g_ClipVertexBufferStage4[32];
extern SEdgeData g_RasterizerEdgeArray[16];
extern CRITICAL_SECTION g_StaticCriticalSectionArray[64];
extern dword DWORD_03f9d000;

