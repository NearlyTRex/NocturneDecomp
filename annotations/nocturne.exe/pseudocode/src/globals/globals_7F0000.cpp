#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x7F0000
// =============================================================================

// CDemonCamera*
CDemonCamera* g_CurrentSceneCamera = {};
CDemonCamera* g_SkipClearBuffersSceneCamera = {};

// CVector3i[77120]
CVector3i g_PrecomputedWorldPositions[77120] = {};

