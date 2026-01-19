#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CConsole.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActorType.h"
#include "types/structs/SCramWorkingEntry.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x830000
// =============================================================================

// CConsole
extern CConsole g_ConsolePtr;

// CDeformableModelInstance
extern CDeformableModelInstance g_CDeformableModelInstanceInstance;

// CDemonActorType
extern CDemonActorType g_CColonelClassInfo;
extern CDemonActorType g_CConveyorClassInfo;
extern CDemonActorType g_CZombieCowClassInfo;

// SCramWorkingEntry[1]
extern SCramWorkingEntry g_CramSortedTextureEntries[1];

