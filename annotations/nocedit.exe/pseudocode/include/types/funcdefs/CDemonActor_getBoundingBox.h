#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CBoundingBox3D;
struct CDemonActor;

// Function Definition: CDemonActor_getBoundingBox
typedef struct CBoundingBox3D* (*CDemonActor_getBoundingBox)(struct CDemonActor* this_ptr, struct CBoundingBox3D* out_box);

