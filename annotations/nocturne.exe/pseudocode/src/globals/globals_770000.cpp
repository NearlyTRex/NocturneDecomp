#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x770000
// =============================================================================

// CConsole
CConsole g_CConsoleInstance = {};

// CDemonActorType
CDemonActorType g_CColonelClassInfo = {};
CDemonActorType g_CConveyorClassInfo = {};
CDemonActorType g_CZombieCowClassInfo = {};
CDemonActorType g_CCrateClassInfo = {};
CDemonActorType g_CCrossbowClassInfo = {};
CDemonActorType g_CCurtainClassInfo = {};

// CVector3f[100]
CVector3f g_CurtainCollisionPositions[100] = {};

// SCollisionInfo[100]
SCollisionInfo g_CurtainCollisionInfos[100] = {};

// char[145328]
char g_CHAR_ARRAY_0077d250[145328] = {};

// int
int g_INT_0077bdb8 = {};

// int[17]
int g_ColonelIndices[17] = {};

