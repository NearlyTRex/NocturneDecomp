#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1ED0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CPendulumClassInfo = {};
CDemonActorType g_CPlatformClassInfo = {};
CDemonActorType g_CPryeClassInfo = {};
CDemonActorType g_CPryeMorphClassInfo = {};
CDemonActorType g_CRifleClassInfo = {};
CDemonActorType g_CSentinelClassInfo = {};

// CDemonPod
CDemonPod g_CDemonPodInstance = {};

// CDemonSet
CDemonSet g_CDemonSetInstance = {};

// CDoor*
CDoor* g_CDoor_PTR_01ed36a8 = {};

// CLever*
CLever* g_CLever_PTR_01ed36b8 = {};

// CPickList
CPickList g_ScriptPickList = {};

// CScript
CScript g_CScriptInstance = {};

// CVector3f
CVector3f g_CVector3f_01ed36ac = {};
CVector3f g_CVector3f_01ed36c0 = {};
CVector3f g_CVector3f_01ed36cc = {};

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad g_PathMapQuad = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_01ed2c8c[16] = {};
SSoftwareEdge g_SSoftwareEdge_ARRAY_01ed31a0[16] = {};

// byte
byte g_BYTE_01ed36bc = {};

// char[101][100]
char g_PathfindingVisited[101][100] = {};

// char[10][1024]
char g_ScriptSubtitleLines[10][1024] = {};

// char[2048]
char g_ScriptLineBuffer[2048] = {};
char g_CHAR_ARRAY_01ed6810[2048] = {};

// float
float g_FLOAT_01ed36d8 = {};
float g_FLOAT_01ed3784 = {};
float g_ScriptTimeScale = {};

// int
int g_PathfindingQueueHead = {};
int g_PathfindingQueueTail = {};
int g_PathfindingNodesExpanded = {};
int g_SoftwareEdgeCount = {};
int g_SoftwareMinScanline = {};
int g_SoftwareMaxScanline = {};
int g_RenderedTriangleCount = {};
int g_ActiveEdgeCount = {};
int g_MinScanline = {};
int g_MaxScanline = {};
int g_INT_01ed36dc = {};
int g_INT_01ed36e0 = {};
int g_INT_01ed36e4 = {};
int g_INT_01ed36e8 = {};
int g_PreviousLetterboxMode = {};
int g_INT_01ed6808 = {};
int g_ScriptInputFlag = {};
int g_ScriptLoopWarningShown = {};
int g_INT_01ed701c = {};

// int[12]
int g_SentinelIndices[12] = {};

// int[23]
int g_StrangerIndices[23] = {};

// uchar
uchar g_PathfindingVisitedMinus1 = {};

