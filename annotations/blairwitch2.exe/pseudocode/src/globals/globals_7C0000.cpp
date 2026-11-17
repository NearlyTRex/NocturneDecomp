#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x7C0000
// =============================================================================

// CConsole
CConsole g_CConsoleInstance = {};

// CDemonActorType
CDemonActorType g_CColonelClassInfo = {};
CDemonActorType g_CConstructClassInfo = {};
CDemonActorType g_CConveyorClassInfo = {};
CDemonActorType g_CZombieCowClassInfo = {};
CDemonActorType g_CCrateClassInfo = {};
CDemonActorType g_CCrossbowClassInfo = {};

// SRenderVertex[16]
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

// char[500000]
char g_CameraLoadImageReadBuffer[500000] = {};

// int
int g_INT_007c254c = {};
int g_INT_007c2554 = {};
int g_INT_007c2560 = {};
int g_INT_007c2568 = {};
int g_INT_007c256c = {};
int g_INT_007c2578 = {};
int g_INT_007c2580 = {};

// int[17]
int g_ColonelIndices[17] = {};

