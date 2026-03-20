#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CLightningBolt.h"
#include "types/classes/CPopcorn.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CRainDrop.h"
#include "types/classes/CShell.h"
#include "types/classes/CTrail.h"
#include "types/structs/SHardwareEdge.h"
#include "types/unions/UVector3.h"

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

// CQuaternion4f
extern CQuaternion4f g_GabriellaWeaponAimRotation;

// CRainDrop[256]
extern CRainDrop g_RainDropPool[256];

// CShell[50]
extern CShell g_ShellPool[50];

// CTrail[100]
extern CTrail g_TrailPool[100];

// SHardwareEdge[16]
extern SHardwareEdge g_HardwareEdgeTable[16];

// UVector3
extern UVector3 UNION_UVector3_02d7b814;
extern UVector3 UNION_UVector3_02d7b820;
extern UVector3 UNION_UVector3_02d7b82c;

// char[1024]
extern char g_TempTextBuffer[1024];

// char[10][256]
extern char g_WrappedTextBuffer[10][256];

// char[5120]
extern char g_ActStatsTextBuffer1[5120];
extern char g_ActStatsTextBuffer2[5120];

// double
extern double DOUBLE_02d7c2e0;

// float
extern float FLOAT_02d7b7f0;
extern float FLOAT_02d7b808;
extern float FLOAT_02d7b80c;
extern float FLOAT_02d7b810;
extern float FLOAT_02d7b838;
extern float FLOAT_02d7b83c;
extern float FLOAT_02d7b840;
extern float FLOAT_02d7b844;
extern float FLOAT_02d7c2e8;

// float[64][8]
extern float g_SplineBasisTable[64][8];

// int
extern int g_LightningBoltAllocIndex;
extern int g_TrailAllocIndex;
extern int g_ShellAllocIndex;
extern int g_PopcornAllocIndex;
extern int g_RainDropAllocIndex;
extern int INT_02d7a7b4;
extern int INT_02d7a7b8;
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

// int[20]
extern int g_GabriellaIndices[20];

// uchar
extern uchar g_ShadowColor8;
extern uchar g_GabriellaWeaponAimRotationInitFlag;

// uint
extern uint g_FlyBlendColor;
extern uint g_FlyInvBlendColor;

// ushort
extern ushort g_ShadowColor16;

