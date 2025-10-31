#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x15C0000
// =============================================================================

int[240] g_CoronaLeftIntensity = {};
int[240] g_CoronaRightIntensity = {};
CVector3f[16] g_CubeInputTriangleBuffer = {};
CVector3f[16] g_ClipStageMaxYBuffer = {};
CVector3f[16] g_ClipStageMinYBuffer = {};
CVector3f[16] g_ClipStageMaxXBuffer = {};
CVector3f[16] g_ClipStageMinXBuffer = {};
CVector3f[16] g_ClipStageMinZBuffer = {};
CVector3f[16] g_CubeClippedTriangleBuffer = {};
uint[3] g_TempTriangleIndices = {};
SPolygonScreenData[20000] g_PolygonScreenCache = {};

