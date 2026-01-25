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

// float
float FLOAT_02d7b808 = {};
float FLOAT_02d7b80c = {};
float FLOAT_02d7b810 = {};
float FLOAT_02d7b814 = {};
float FLOAT_02d7b818 = {};
float FLOAT_02d7b81c = {};
float FLOAT_02d7b820 = {};
float FLOAT_02d7b824 = {};
float FLOAT_02d7b828 = {};
float FLOAT_02d7b82c = {};
float FLOAT_02d7b830 = {};
float FLOAT_02d7b834 = {};
float FLOAT_02d7b838 = {};
float FLOAT_02d7b83c = {};
float FLOAT_02d7b840 = {};
float FLOAT_02d7b844 = {};

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
int INT_02d7b848 = {};
int INT_02d7b84c = {};
int INT_02d7b850 = {};
int INT_02d7b854 = {};
int INT_02d7b858 = {};
int INT_02d7b85c = {};
int INT_02d7b860 = {};
int INT_02d7b864 = {};
int INT_02d7b868 = {};
int INT_02d7b86c = {};
int INT_02d7b870 = {};
int INT_02d7b874 = {};
int INT_02d7b878 = {};
int INT_02d7b87c = {};
int INT_02d7b880 = {};
int INT_02d7b884 = {};
int INT_02d7b888 = {};
int INT_02d7b88c = {};
int INT_02d7b890 = {};
int INT_02d7b894 = {};

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
undefined4 DAT_02d7c2e8 = {};

// ushort
ushort g_ShadowColor16 = {};

