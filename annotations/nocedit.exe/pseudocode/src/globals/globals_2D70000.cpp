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

// CGunFlame*
CGunFlame* g_GunFlameActiveListHead = {};

// CLightningBolt*
CLightningBolt* g_LightningBoltActiveListHead = {};

// CLightningBolt[10]
CLightningBolt g_LightningBoltPool[10] = {};

// CPopcorn*
CPopcorn* g_CFireEffectPopcornsEnd = {};

// CPopcorn[256]
CPopcorn g_PopcornPool[256] = {};

// CRainDrop[256]
CRainDrop g_RainDropPool[256] = {};

// CShell*
CShell* g_CFireEffectShellsEnd = {};

// CShell[50]
CShell g_ShellPool[50] = {};

// CTrail*
CTrail* g_TrailActiveListHead = {};

// CTrail[100]
CTrail g_TrailPool[100] = {};

// SHardwareEdge[16]
SHardwareEdge g_HardwareEdgeTable[16] = {};

// char*
char* g_WrappedTextBuffer = {};

// char[256]
char g_TempTextBuffer[256] = {};

// int
int g_LightAttenuationMax = {};
int INT_02d7a7c0 = {};
int g_ShadowColor32 = {};
int g_ShadowColorRed = {};
int g_ShadowColorGreen = {};
int g_ShadowColorBlue = {};
int g_DefaultTextColor = {};
int g_EdgeCount = {};
int g_EdgeListMinY = {};
int g_EdgeListMaxY = {};

// undefined1
undefined1 DAT_02d7b410 = {};
undefined1 DAT_02d7b804 = {};

// undefined4
undefined4 DAT_02d7a7b8 = {};
undefined4 DAT_02d7a800 = {};
undefined4 DAT_02d7a804 = {};
undefined4 DAT_02d7b7f4 = {};
undefined4 DAT_02d7b7f8 = {};
undefined4 DAT_02d7b7fc = {};
undefined4 DAT_02d7b800 = {};
undefined4 DAT_02d7b848 = {};
undefined4 DAT_02d7b84c = {};
undefined4 DAT_02d7b850 = {};
undefined4 DAT_02d7b858 = {};
undefined4 DAT_02d7b860 = {};
undefined4 DAT_02d7b864 = {};
undefined4 DAT_02d7b868 = {};
undefined4 DAT_02d7b870 = {};
undefined4 DAT_02d7b878 = {};
undefined4 DAT_02d7b87c = {};
undefined4 DAT_02d7b880 = {};
undefined4 DAT_02d7b884 = {};
undefined4 DAT_02d7b888 = {};
undefined4 DAT_02d7b88c = {};
undefined4 DAT_02d7b890 = {};
undefined4 DAT_02d7b894 = {};
undefined4 DAT_02d7c2e8 = {};

// ushort
ushort g_ShadowColor16 = {};

