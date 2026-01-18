#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x15C0000
// =============================================================================

int g_CoronaLeftIntensity[240] = {};
int g_CoronaRightIntensity[240] = {};
SCameraViewportState g_SavedCameraState;
CVector3f g_DownwardRayDirection;
CVector3f g_StaticColorVector;
CVector3f g_CubeInputTriangleBuffer[16] = {};
CVector3f g_ClipStageMaxYBuffer[16] = {};
CVector3f g_ClipStageMinYBuffer[16] = {};
CVector3f g_ClipStageMaxXBuffer[16] = {};
CVector3f g_ClipStageMinXBuffer[16] = {};
CVector3f g_ClipStageMinZBuffer[16] = {};
CVector3f g_CubeClippedTriangleBuffer[16] = {};
CVector3f g_TempNormal0;
CVector3f g_TempNormal1;
CVector3f g_TempNormal2;
uint g_TempTriangleIndices[3] = {};
SPolygonScreenData g_PolygonScreenCache[20000] = {};

