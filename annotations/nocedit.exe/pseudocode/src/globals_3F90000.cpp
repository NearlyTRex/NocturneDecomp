#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

PALETTEENTRY[256] g_DDPaletteBuffer = {};
CVector3f[200] DAT_03f95df8 = {};
int[20] g_InputBuffer = {};
int[513] g_MessageFlags = {};
WNDPROC[4] g_WindowMessageHandlers = {};
SRenderVertex[32] g_ClipVertexBufferStage2 = {};
SRenderVertex[32] g_ClipVertexBufferStage1 = {};
SRenderVertex[32] g_ClipVertexBufferStage3 = {};
SRenderVertex[32] g_ClipVertexBufferStage4 = {};
SEdgeData[16] g_RasterizerEdgeArray = {};
CRITICAL_SECTION[64] g_StaticCriticalSectionArray = {};
dword DWORD_03f9d000 = 0x1000;

