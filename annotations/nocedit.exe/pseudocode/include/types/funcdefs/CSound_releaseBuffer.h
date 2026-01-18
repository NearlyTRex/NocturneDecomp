#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSound;

// Function Definition: CSound_releaseBuffer
typedef void (*CSound_releaseBuffer)(struct CSound* this_ptr, void* buffer_id, void* param2, void* buffer);

