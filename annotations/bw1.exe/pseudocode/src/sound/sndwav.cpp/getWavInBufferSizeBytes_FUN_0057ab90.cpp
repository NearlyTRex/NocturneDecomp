// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_0057ab90
// Address: 0057ab90
// Address Range: [[0057ab90, 0057abb3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0057ab90(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0057ab90(void)

{
  return ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples *
         g_WaveInChannels;
}
