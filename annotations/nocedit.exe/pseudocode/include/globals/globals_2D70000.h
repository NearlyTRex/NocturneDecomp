#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CGunFlame.h"
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

// CGunFlame*
extern CGunFlame* g_GunFlameActiveListHead;

// CLightningBolt*
extern CLightningBolt* g_LightningBoltActiveListHead;

// CLightningBolt[10]
extern CLightningBolt g_LightningBoltPool[10];

// CPopcorn*
extern CPopcorn* g_CFireEffectPopcornsEnd;

// CPopcorn[256]
extern CPopcorn g_PopcornPool[256];

// CRainDrop[256]
extern CRainDrop g_RainDropPool[256];

// CShell*
extern CShell* g_CFireEffectShellsEnd;

// CShell[50]
extern CShell g_ShellPool[50];

// CTrail*
extern CTrail* g_TrailActiveListHead;

// CTrail[100]
extern CTrail g_TrailPool[100];

// SHardwareEdge[16]
extern SHardwareEdge g_HardwareEdgeTable[16];

// char*
extern char* g_WrappedTextBuffer;

// char[256]
extern char g_TempTextBuffer[256];

// int
extern int g_LightAttenuationMax;
extern int INT_02d7a7c0;
extern int g_ShadowColor32;
extern int g_ShadowColorRed;
extern int g_ShadowColorGreen;
extern int g_ShadowColorBlue;
extern int g_DefaultTextColor;
extern int g_EdgeCount;
extern int g_EdgeListMinY;
extern int g_EdgeListMaxY;

// undefined1
extern undefined1 DAT_02d7b410;
extern undefined1 DAT_02d7b804;

// undefined4
extern undefined4 DAT_02d7a7b8;
extern undefined4 DAT_02d7a800;
extern undefined4 DAT_02d7a804;
extern undefined4 DAT_02d7b7f4;
extern undefined4 DAT_02d7b7f8;
extern undefined4 DAT_02d7b7fc;
extern undefined4 DAT_02d7b800;
extern undefined4 DAT_02d7b848;
extern undefined4 DAT_02d7b84c;
extern undefined4 DAT_02d7b850;
extern undefined4 DAT_02d7b858;
extern undefined4 DAT_02d7b860;
extern undefined4 DAT_02d7b864;
extern undefined4 DAT_02d7b868;
extern undefined4 DAT_02d7b870;
extern undefined4 DAT_02d7b878;
extern undefined4 DAT_02d7b87c;
extern undefined4 DAT_02d7b880;
extern undefined4 DAT_02d7b884;
extern undefined4 DAT_02d7b888;
extern undefined4 DAT_02d7b88c;
extern undefined4 DAT_02d7b890;
extern undefined4 DAT_02d7b894;
extern undefined4 DAT_02d7c2e8;

// ushort
extern ushort g_ShadowColor16;

