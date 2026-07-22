#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_poll
typedef int CSoundDevice_poll(struct CSoundDevice* this_ptr, short* output_buffer, int num_samples);

