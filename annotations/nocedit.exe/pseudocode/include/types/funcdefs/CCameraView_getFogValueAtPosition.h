#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonCamera;
struct CVector3i;
struct SProjectedVertex;

// Function Definition: CCameraView_getFogValueAtPosition
typedef int CCameraView_getFogValueAtPosition(struct CDemonCamera* this_ptr, struct CVector3i* world_position, struct SProjectedVertex* projected_vertex);

