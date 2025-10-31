#pragma once

// Individual function definition header for: CSound_setFormat

// Function Definition: CSound_setFormat
typedef int (*CSound_setFormat)(CSound* this, int bits_per_sample, int channels, int sample_rate, int* out_buffer_size);

