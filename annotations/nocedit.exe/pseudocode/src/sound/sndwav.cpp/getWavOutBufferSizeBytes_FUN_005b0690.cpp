// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690
// Address: 005b0690
// Address Range: [[005b0690, 005b06b3]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_005b0690(void)

{
  return ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize *
         g_WaveOutChannels;
}
