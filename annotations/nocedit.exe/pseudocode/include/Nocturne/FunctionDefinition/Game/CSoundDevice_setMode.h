#pragma once

// Individual function definition header for: CSoundDevice_setMode

// Function Definition: CSoundDevice_setMode
typedef int (*CSoundDevice_setMode)(CSoundDevice* this_ptr, int bits_per_sample, ushort channels, int sample_rate, uint* out_buffer_size);

