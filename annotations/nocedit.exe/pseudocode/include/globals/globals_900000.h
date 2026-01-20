#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x900000
// =============================================================================

// CDemonCamera*
extern CDemonCamera* g_SkipClearBuffersSceneCamera;

// CVector3i[15360]
extern CVector3i g_PrecomputedWorldPositions[15360];

