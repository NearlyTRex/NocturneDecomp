#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F90000
// =============================================================================

PALETTEENTRY g_DDPaletteBuffer[256] = {};
CVector3f DAT_03f95df8[200] = {};
int g_InputBuffer[20] = {};
int g_MessageFlags[513] = {};
WNDPROC g_WindowMessageHandlers[4] = {};
SRenderVertex g_ClipVertexBufferStage2[32] = {};
SRenderVertex g_ClipVertexBufferStage1[32] = {};
SRenderVertex g_ClipVertexBufferStage3[32] = {};
SRenderVertex g_ClipVertexBufferStage4[32] = {};
SEdgeData g_RasterizerEdgeArray[16] = {};
CRITICAL_SECTION g_StaticCriticalSectionArray[64] = {};
dword DWORD_03f9d000 = 0x1000;

