#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x15C0000
// =============================================================================

// CDemonGlobe*
CDemonGlobe* g_CurrentGlobe = {};

// CVector3f
CVector3f g_DownwardRayDirection = {};
CVector3f g_StaticColorVector = {};
CVector3f g_TempNormal0 = {};
CVector3f g_TempNormal1 = {};
CVector3f g_TempNormal2 = {};

// CVector3f[16]
CVector3f g_CubeInputTriangleBuffer[16] = {};
CVector3f g_ClipStageMaxYBuffer[16] = {};
CVector3f g_ClipStageMinYBuffer[16] = {};
CVector3f g_ClipStageMaxXBuffer[16] = {};
CVector3f g_ClipStageMinXBuffer[16] = {};
CVector3f g_ClipStageMinZBuffer[16] = {};
CVector3f g_CubeClippedTriangleBuffer[16] = {};

// SCameraViewportState
SCameraViewportState g_SavedCameraState = {};

// SPolygonScreenData[20000]
SPolygonScreenData g_PolygonScreenCache[20000] = {};

// SShapeEditorPolygon*
SShapeEditorPolygon* g_BackupPolygons = {};

// SVertexData*
SVertexData* g_BackupVertices = {};

// char*
char* g_CoronaLightingTextureData = {};

// char[40]
char g_BackupModelName[40] = {};
char g_SavedModelName[40] = {};

// int
int g_FlatShadingLightLevel = {};
int g_CoronaVisibilityEnabled = {};
int g_CoronaTargetX = {};
int g_CoronaTargetY = {};
int g_CoronaTargetDepth = {};
int g_PolygonVertexDisplayEnabled = {};
int g_FacetWireframeMode = {};
int g_ShowUVCoordinates = {};
int g_ShowVertexCoordinates = {};
int g_MouseButtonClickCounter = {};
int g_PolygonReducerEnabled = {};
int g_BackupVertexCount = {};
int g_BackupPolygonCount = {};
int g_ToolModeEnabled = {};
int g_SavedVertexCount = {};
int g_SavedPolygonCount = {};
int g_PolygonToolMode = {};

// int[240]
int g_CoronaLeftIntensity[240] = {};
int g_CoronaRightIntensity[240] = {};

// uchar
uchar g_DownwardRayInitialized = {};
uchar g_ColorConstantsInitialized = {};

// uint
uint g_CubeInputTriangleCount = {};
uint g_CubeClipStage1Count = {};
uint g_CubeClipStage2Count = {};
uint g_CubeClipStage3Count = {};
uint g_CubeClipStage4Count = {};
uint g_CubeClipStage5Count = {};
uint g_CubeClippedTriangleCount = {};

// uint[3]
uint g_TempTriangleIndices[3] = {};

