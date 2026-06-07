// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690
// Address: 005b0690
// MANUAL RECONSTRUCTION
// Address Range: [[005b0690, 005b06b3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_005b0690(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_005b0690(void)

{
  return g_WaveOutBitsPerSample / 8 * g_WaveOutBufferSize * g_WaveOutChannels;
}
