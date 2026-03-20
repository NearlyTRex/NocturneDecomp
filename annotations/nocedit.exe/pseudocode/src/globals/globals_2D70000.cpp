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

// CQuaternion4f
CQuaternion4f g_GabriellaWeaponAimRotation = {};

// CRainDrop[256]
CRainDrop g_RainDropPool[256] = {};

// CShell[50]
CShell g_ShellPool[50] = {};

// CTrail[100]
CTrail g_TrailPool[100] = {};

// SHardwareEdge[16]
SHardwareEdge g_HardwareEdgeTable[16] = {};

// UVector3
UVector3 UNION_UVector3_02d7b814 = {};
UVector3 UNION_UVector3_02d7b820 = {};
UVector3 UNION_UVector3_02d7b82c = {};

// char[1024]
char g_TempTextBuffer[1024] = {};

// char[10][256]
char g_WrappedTextBuffer[10][256] = {};

// char[5120]
char g_ActStatsTextBuffer1[5120] = {};
char g_ActStatsTextBuffer2[5120] = {};

// double
double DOUBLE_02d7c2e0 = {};

// float
float FLOAT_02d7b7f0 = {};
float FLOAT_02d7b808 = {};
float FLOAT_02d7b80c = {};
float FLOAT_02d7b810 = {};
float FLOAT_02d7b838 = {};
float FLOAT_02d7b83c = {};
float FLOAT_02d7b840 = {};
float FLOAT_02d7b844 = {};
float FLOAT_02d7c2e8 = {};

// float[64][8]
float g_SplineBasisTable[64][8] = {};

// int
int g_LightningBoltAllocIndex = {};
int g_TrailAllocIndex = {};
int g_ShellAllocIndex = {};
int g_PopcornAllocIndex = {};
int g_RainDropAllocIndex = {};
int INT_02d7a7b4 = {};
int INT_02d7a7b8 = {};
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

// int[20]
int g_GabriellaIndices[20] = {};

// uchar
uchar g_ShadowColor8 = {};
uchar g_GabriellaWeaponAimRotationInitFlag = {};

// uint
uint g_FlyBlendColor = {};
uint g_FlyInvBlendColor = {};

// ushort
ushort g_ShadowColor16 = {};

