#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/funcdefs/FileSearchHandlerFunc.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C10000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CZombieDogClassInfo;
extern CDemonActorType g_CDoorClassInfo;

// CKeyFramedModel*
extern CKeyFramedModel* g_KeyFrameModelPoolEnd;

// FileSearchHandlerFunc*[5]
extern FileSearchHandlerFunc* g_SearchHandlers[5];

// char[20]
extern char CHAR_ARRAY_02c14c88[20];

// char[72]
extern char g_PolyDataConversionBuffer[72];

// int
extern int g_NumSearchHandlers;

// undefined4
extern undefined4 DAT_02c14cd8;
extern undefined4 DAT_02c14d80;
extern undefined4 DAT_02c14d84;
extern undefined4 DAT_02c14d88;
extern undefined4 DAT_02c14d8c;
extern undefined4 DAT_02c14d90;

