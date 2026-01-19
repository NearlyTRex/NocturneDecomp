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

// CDemonActorType
extern CDemonActorType g_CFlameClassInfo;
extern CDemonActorType g_CFlameCanClassInfo;
extern CDemonActorType g_CFlameThrowerClassInfo;
extern CDemonActorType g_CFlashlightClassInfo;
extern CDemonActorType g_CFliesClassInfo;
extern CDemonActorType g_CFrankenstienMachineClassInfo;
extern CDemonActorType g_CGabriellaClassInfo;

// CDemonLight
extern CDemonLight g_CDemonLightInstance;

// CLightningBolt[10]
extern CLightningBolt g_LightningBoltPool[10];

// CPopcorn[256]
extern CPopcorn g_PopcornPool[256];

// CRainDrop[256]
extern CRainDrop g_RainDropPool[256];

// CShell[50]
extern CShell g_ShellPool[50];

// CTrail[100]
extern CTrail g_TrailPool[100];

// SHardwareEdge[16]
extern SHardwareEdge g_HardwareEdgeTable[16];

// char[256]
extern char g_TempTextBuffer[256];

