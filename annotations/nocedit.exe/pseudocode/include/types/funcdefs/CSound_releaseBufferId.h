#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSound;

// Function Definition: CSound_releaseBufferId
typedef void (*CSound_releaseBufferId)(struct CSound* this, void* buffer_id);

