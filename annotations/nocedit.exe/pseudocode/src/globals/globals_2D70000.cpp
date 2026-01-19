#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D70000
// =============================================================================

// CDemonActorType
CDemonActorType g_CFlameClassInfo = {};
CDemonActorType g_CFlameCanClassInfo = {};
CDemonActorType g_CFlameThrowerClassInfo = {};
CDemonActorType g_CFlashlightClassInfo = {};
CDemonActorType g_CFliesClassInfo = {};
CDemonActorType g_CFrankenstienMachineClassInfo = {};
CDemonActorType g_CGabriellaClassInfo = {};

// CDemonLight
CDemonLight g_CDemonLightInstance = {};

// CLightningBolt[10]
CLightningBolt g_LightningBoltPool[10] = {};

// CPopcorn[256]
CPopcorn g_PopcornPool[256] = {};

// CRainDrop[256]
CRainDrop g_RainDropPool[256] = {};

// CShell[50]
CShell g_ShellPool[50] = {};

// CTrail[100]
CTrail g_TrailPool[100] = {};

// SHardwareEdge[16]
SHardwareEdge g_HardwareEdgeTable[16] = {};

// char[256]
char g_TempTextBuffer[256] = {};

