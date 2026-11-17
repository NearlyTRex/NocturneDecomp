#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E60000
// =============================================================================

// CDemonActorType
CDemonActorType g_CPendulumClassInfo = {};
CDemonActorType g_CPlatformClassInfo = {};
CDemonActorType g_CScatClassInfo = {};
CDemonActorType g_CSentinelClassInfo = {};

// CDemonPod
CDemonPod g_CDemonPodInstance = {};

// CDemonSet
CDemonSet g_CDemonSetInstance = {};

// CPickList
CPickList g_ScriptPickList = {};

// CScript
CScript g_CScriptInstance = {};

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad g_PathMapQuad = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_01e6164c[16] = {};
SSoftwareEdge g_SSoftwareEdge_ARRAY_01e61b60[16] = {};

// char[10][1024]
char g_ScriptSubtitleLines[10][1024] = {};

// char[2048]
char g_ScriptLineBuffer[2048] = {};
char g_CHAR_ARRAY_01e65100[2048] = {};

// float
float g_ScriptTimeScale = {};

// int
int g_PathfindingNodesExpanded = {};
int g_SoftwareEdgeCount = {};
int g_SoftwareMinScanline = {};
int g_SoftwareMaxScanline = {};
int g_RenderedTriangleCount = {};
int g_ActiveEdgeCount = {};
int g_MinScanline = {};
int g_MaxScanline = {};
int g_PreviousLetterboxMode = {};
int g_ScriptEventsEnabled = {};
int g_INT_01e65904 = {};
int g_ScriptLoopWarningShown = {};
int g_ActorLookedUpByVariable = {};

// int[12]
int g_SentinelIndices[12] = {};

// int[18]
int g_ScatIndices[18] = {};

