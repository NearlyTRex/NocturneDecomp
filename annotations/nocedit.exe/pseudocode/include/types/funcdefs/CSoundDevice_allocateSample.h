#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSoundDevice;

// Function Definition: CSoundDevice_allocateSample
typedef int CSoundDevice_allocateSample(struct CSoundDevice* this_ptr, int bits_per_sample, int channel_count, int sample_rate, int sample_count);

