#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_setMode
typedef int (*CSoundDevice_setMode)(struct CSoundDevice* this_ptr, int bits_per_sample, int channels, int sample_rate, int* out_samples_per_block);

