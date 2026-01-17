#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CCourse.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBat.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F30000
// =============================================================================

extern CVector3f g_SamplePointArray[400];
extern CVector3f g_MirrorInputVertices[32];
extern CVector3f g_MirrorOutputVertices[32];
extern CAlphaBitmap g_MoonAnimTextures[30];
extern CCourse g_MoonBatCourses[3];
extern SBat g_MoonBats[30];

