#pragma once

// Individual function definition header for: CSoundDevice_allocateSample

// Function Definition: CSoundDevice_allocateSample
typedef int (*CSoundDevice_allocateSample)(CSoundDevice* this_ptr, int bits_per_sample, int channel_count, int sample_rate, int sample_count);

