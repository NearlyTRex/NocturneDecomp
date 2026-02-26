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
extern CQuaternion4f CQuaternion4f_02d7b7f4;

// CRainDrop[256]
extern CRainDrop g_RainDropPool[256];

// CShell[50]
extern CShell g_ShellPool[50];

// CTrail[100]
extern CTrail g_TrailPool[100];

// SHardwareEdge[16]
extern SHardwareEdge g_HardwareEdgeTable[16];

// char*
extern char* g_WrappedTextBuffer;

// char[256]
extern char g_TempTextBuffer[256];

// double
extern double DOUBLE_02d7c2e0;

// float
extern float FLOAT_02d7b7f0;
extern float FLOAT_02d7b808;
extern float FLOAT_02d7b80c;
extern float FLOAT_02d7b810;
extern float FLOAT_02d7b814;
extern float FLOAT_02d7b818;
extern float FLOAT_02d7b81c;
extern float FLOAT_02d7b820;
extern float FLOAT_02d7b824;
extern float FLOAT_02d7b828;
extern float FLOAT_02d7b82c;
extern float FLOAT_02d7b830;
extern float FLOAT_02d7b834;
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
extern int INT_02d7b848;
extern int INT_02d7b84c;
extern int INT_02d7b850;
extern int INT_02d7b854;
extern int INT_02d7b858;
extern int INT_02d7b85c;
extern int INT_02d7b860;
extern int INT_02d7b864;
extern int INT_02d7b868;
extern int INT_02d7b86c;
extern int INT_02d7b870;
extern int INT_02d7b874;
extern int INT_02d7b878;
extern int INT_02d7b87c;
extern int INT_02d7b880;
extern int INT_02d7b884;
extern int INT_02d7b888;
extern int INT_02d7b88c;
extern int INT_02d7b890;
extern int INT_02d7b894;

// uchar
extern uchar g_ShadowColor8;

// uint
extern uint g_FlyBlendColor;
extern uint g_FlyInvBlendColor;

// undefined1
extern undefined1 DAT_02d7b804;

// ushort
extern ushort g_ShadowColor16;

