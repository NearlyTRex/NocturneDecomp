#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CShell.h"
#include "types/classes/CTrail.h"
#include "types/structs/SHardwareEdge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2D70000
// =============================================================================

extern CLightningBolt g_LightningBoltPool[10];
extern CTrail g_TrailPool[100];
extern CShell g_ShellPool[50];
extern CPopcorn g_PopcornPool[256];
extern CRainDrop g_RainDropPool[256];
extern CDemonActorType g_CFlameClassInfo;
extern CDemonActorType g_CFlameCanClassInfo;
extern CDemonActorType g_CFlameThrowerClassInfo;
extern CDemonActorType g_CFlashlightClassInfo;
extern CDemonActorType g_CFliesClassInfo;
extern SHardwareEdge g_HardwareEdgeTable[16];
extern CDemonActorType g_CFrankenstienMachineClassInfo;
extern CDemonActorType g_CGabriellaClassInfo;
extern CDemonLight g_CDemonLightInstance;

