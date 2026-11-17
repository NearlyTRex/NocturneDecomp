#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x880000
// =============================================================================

// CDemonActorType
CDemonActorType g_CCrateClassInfo = {};
CDemonActorType g_CCrossbowClassInfo = {};
CDemonActorType g_CCurtainClassInfo = {};

// CVector3f[100]
CVector3f g_CurtainCollisionPositions[100] = {};

// SCollisionInfo[100]
SCollisionInfo g_CurtainCollisionInfos[100] = {};

// SCramRectangle**
SCramRectangle** g_CramCandidateWriteCursor = {};

// char[500000]
char g_CameraLoadImageReadBuffer[500000] = {};

// int
int g_CurtainCollisionCount = {};

