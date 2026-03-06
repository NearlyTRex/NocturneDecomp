#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CConsole.h"
#include "types/classes/CCramTex.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActorType.h"
#include "types/unions/UVector3.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x830000
// =============================================================================

// CConsole
extern CConsole g_CConsoleInstance;

// CCramTex[250]
extern CCramTex g_CramSortedTextureEntries[250];

// CDeformableModelInstance
extern CDeformableModelInstance g_CDeformableModelInstanceInstance;

// CDemonActorType
extern CDemonActorType g_CColonelClassInfo;
extern CDemonActorType g_CConveyorClassInfo;
extern CDemonActorType g_CZombieCowClassInfo;

// UVector3
extern UVector3 UNION_UVector3_00838e40;
extern UVector3 UNION_UVector3_00838e4c;

// char[20]
extern char g_ClothBoneScreenshotFilename[20];

// int
extern int g_ClothBoneScreenshotCounter;
extern int INT_0083b124;
extern int INT_0083b128;
extern int INT_0083b12c;
extern int INT_0083b130;
extern int INT_0083b134;
extern int INT_0083b138;
extern int INT_0083b13c;
extern int INT_0083b140;
extern int INT_0083b144;
extern int INT_0083b148;
extern int INT_0083b14c;
extern int INT_0083b150;
extern int INT_0083b154;
extern int INT_0083b158;
extern int INT_0083b15c;
extern int INT_0083b160;
extern int INT_0083b164;
extern int g_CramVisualizationUpdateCounter;

