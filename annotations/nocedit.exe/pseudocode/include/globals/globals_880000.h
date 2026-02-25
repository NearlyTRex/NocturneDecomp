#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCramRectangle.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x880000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CCrateClassInfo;
extern CDemonActorType g_CCrossbowClassInfo;
extern CDemonActorType g_CCurtainClassInfo;

// CVector3f[100]
extern CVector3f CVector3f_ARRAY_008879c0[100];

// SCollisionInfo[100]
extern SCollisionInfo SCollisionInfo_ARRAY_00887e70[100];

// SCramRectangle**
extern SCramRectangle** g_CramCandidateWriteCursor;

// char[500000]
extern char g_CameraLoadImageReadBuffer[500000];

// int
extern int INT_008879bc;

