#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CPickList.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3650000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CShotgunClassInfo;
extern CDemonActorType g_CShovelClassInfo;
extern CDemonActorType g_CSimBoxClassInfo;

// CPickList
extern CPickList g_MissingBackdropFiles;

// char[100][30]
extern char g_BoneNameBuffer[100][30];

// char[500]
extern char g_GroundTextureTypes[500];

// char[500][40]
extern char g_GroundTextureNames[500][40];

// char[768]
extern char g_ThumbnailPalette[768];

// int
extern int g_GroundTextureCount;

// undefined4
extern undefined4 DAT_03659388;
extern undefined4 DAT_0365938c;

// void*
extern void* g_CameraDepthData;

