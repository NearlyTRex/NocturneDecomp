#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCameraViewportState.h"
#include "types/structs/SPolygonScreenData.h"
#include "types/structs/SShapeEditorPolygon.h"
#include "types/structs/SVertexData.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x15C0000
// =============================================================================

// CDemonGlobe*
extern CDemonGlobe* g_CurrentGlobe;

// CVector3f
extern CVector3f g_DownwardRayDirection;
extern CVector3f g_StaticColorVector;
extern CVector3f g_TempNormal0;
extern CVector3f g_TempNormal1;
extern CVector3f g_TempNormal2;

// CVector3f[16]
extern CVector3f g_CubeInputTriangleBuffer[16];
extern CVector3f g_ClipStageMaxYBuffer[16];
extern CVector3f g_ClipStageMinYBuffer[16];
extern CVector3f g_ClipStageMaxXBuffer[16];
extern CVector3f g_ClipStageMinXBuffer[16];
extern CVector3f g_ClipStageMinZBuffer[16];
extern CVector3f g_CubeClippedTriangleBuffer[16];

// SCameraViewportState
extern SCameraViewportState g_SavedCameraState;

// SPolygonScreenData[20000]
extern SPolygonScreenData g_PolygonScreenCache[20000];

// SShapeEditorPolygon*
extern SShapeEditorPolygon* g_BackupPolygons;

// SVertexData*
extern SVertexData* g_BackupVertices;

// char*
extern char* g_CoronaLightingTextureData;

// char[40]
extern char g_BackupModelName[40];
extern char g_SavedModelName[40];

// int
extern int g_FlatShadingLightLevel;
extern int g_CoronaVisibilityEnabled;
extern int g_CoronaTargetX;
extern int g_CoronaTargetY;
extern int g_CoronaTargetDepth;
extern int g_PolygonVertexDisplayEnabled;
extern int g_FacetWireframeMode;
extern int g_ShowUVCoordinates;
extern int g_ShowVertexCoordinates;
extern int g_MouseButtonClickCounter;
extern int g_PolygonReducerEnabled;
extern int g_BackupVertexCount;
extern int g_BackupPolygonCount;
extern int g_ToolModeEnabled;
extern int g_SavedVertexCount;
extern int g_SavedPolygonCount;
extern int g_PolygonToolMode;

// int[240]
extern int g_CoronaLeftIntensity[240];
extern int g_CoronaRightIntensity[240];

// uchar
extern uchar g_DownwardRayInitialized;
extern uchar g_ColorConstantsInitialized;

// uint
extern uint g_CubeInputTriangleCount;
extern uint g_CubeClipStage1Count;
extern uint g_CubeClipStage2Count;
extern uint g_CubeClipStage3Count;
extern uint g_CubeClipStage4Count;
extern uint g_CubeClipStage5Count;
extern uint g_CubeClippedTriangleCount;

// uint[3]
extern uint g_TempTriangleIndices[3];

