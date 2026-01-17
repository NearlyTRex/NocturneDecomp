#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_allocateSfx
typedef int (*CSoundDevice_allocateSfx)(struct CSoundDevice* this_ptr, int sample_buffer_id);

