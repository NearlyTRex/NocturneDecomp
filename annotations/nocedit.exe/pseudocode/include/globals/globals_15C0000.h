#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SPolygonScreenData.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x15C0000
// =============================================================================

extern int g_CoronaLeftIntensity[240];
extern int g_CoronaRightIntensity[240];
extern CVector3f g_CubeInputTriangleBuffer[16];
extern CVector3f g_ClipStageMaxYBuffer[16];
extern CVector3f g_ClipStageMinYBuffer[16];
extern CVector3f g_ClipStageMaxXBuffer[16];
extern CVector3f g_ClipStageMinXBuffer[16];
extern CVector3f g_ClipStageMinZBuffer[16];
extern CVector3f g_CubeClippedTriangleBuffer[16];
extern uint g_TempTriangleIndices[3];
extern SPolygonScreenData g_PolygonScreenCache[20000];

