#pragma once

// Individual function definition header for: CSoundDevice_setMode

// Function Definition: CSoundDevice_setMode
typedef int (*CSoundDevice_setMode)(CSoundDevice* this_ptr, int bits_per_sample, int channels, int sample_rate, int* out_samples_per_block);

