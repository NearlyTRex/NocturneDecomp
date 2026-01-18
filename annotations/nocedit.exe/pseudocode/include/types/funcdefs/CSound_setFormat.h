#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CSound;

// Function Definition: CSound_setFormat
typedef int (*CSound_setFormat)(struct CSound* this_ptr, int bits_per_sample, int channels, int sample_rate, int* out_buffer_size);

