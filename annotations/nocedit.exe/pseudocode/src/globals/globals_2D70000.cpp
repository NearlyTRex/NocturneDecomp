#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D70000
// =============================================================================

CLightningBolt g_LightningBoltPool[10] = {};
CTrail g_TrailPool[100] = {};
CShell g_ShellPool[50] = {};
CPopcorn g_PopcornPool[256] = {};
CRainDrop g_RainDropPool[256] = {};
CDemonActorType g_CFlameClassInfo;
CDemonActorType g_CFlameCanClassInfo;
CDemonActorType g_CFlameThrowerClassInfo;
CDemonActorType g_CFlashlightClassInfo;
CDemonActorType g_CFliesClassInfo;
SHardwareEdge g_HardwareEdgeTable[16] = {};
CDemonActorType g_CFrankenstienMachineClassInfo;
CDemonActorType g_CGabriellaClassInfo;
CDemonLight g_CDemonLightInstance;

