#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E50000
// =============================================================================

// CDemonActorType
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

// SSoftwareEdge[16]
SSoftwareEdge g_SoftwareEdgeBuffer[16] = {};
SSoftwareEdge g_SoftwareEdgeTable[16] = {};

// char[10][1024]
char g_ScriptSubtitleLines[10][1024] = {};

// char[2048]
char g_ScriptLineBuffer[2048] = {};
char g_ScriptErrorBuffer[2048] = {};

// float
float g_ScriptTimeScale = {};

// int
int g_SoftwareEdgeCount = {};
int g_SoftwareMinScanline = {};
int g_SoftwareMaxScanline = {};
int g_RenderedTriangleCount = {};
int g_ActiveEdgeCount = {};
int g_MinScanline = {};
int g_MaxScanline = {};
int g_PreviousLetterboxMode = {};
int g_ScriptEventsEnabled = {};
int g_ScriptInputFlag = {};
int g_ScriptLoopWarningShown = {};
int g_ActorLookedUpByVariable = {};
int g_INT_01e57218 = {};
int g_INT_01e5721c = {};
int g_INT_01e57220 = {};
int g_INT_01e5722c = {};
int g_INT_01e57230 = {};
int g_INT_01e5723c = {};
int g_INT_01e57244 = {};

// int[18]
int g_ScatIndices[18] = {};

