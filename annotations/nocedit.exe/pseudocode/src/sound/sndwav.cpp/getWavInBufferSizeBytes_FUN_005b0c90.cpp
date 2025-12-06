// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cb3]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)

{
  return ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples *
         g_WaveInChannels;
}
