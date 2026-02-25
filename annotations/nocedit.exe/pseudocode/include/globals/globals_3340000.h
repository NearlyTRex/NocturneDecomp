#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CZThumb.h"
#include "types/structs/SDisplayListSortEntry.h"
#include "types/structs/SRaytraceState.h"
#include "types/unions/UVector3.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3340000
// =============================================================================

// CVector3f
extern CVector3f g_SavedCameraRotation;
extern CVector3f g_VDTempVector;

// CZThumb[1500]
extern CZThumb g_CZThumbPool[1500];

// SDisplayListSortEntry[2000]
extern SDisplayListSortEntry g_SetDisplayListSortBuffer[2000];

// SRaytraceState[5]
extern SRaytraceState g_RaytraceStateStack[5];

// UVector3
extern UVector3 g_SavedCameraOrigin;

// float
extern float g_SavedProjectionFactor;

// float[250]
extern float g_VDCameraScores[250];

// int
extern int g_SetDisplayListCount;
extern int g_RaytraceStateStackDepth;
extern int g_VDCameraIndex;

