#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_freeSample
typedef void (*CSoundDevice_freeSample)(struct CSoundDevice* this_ptr, int buffer_id);

