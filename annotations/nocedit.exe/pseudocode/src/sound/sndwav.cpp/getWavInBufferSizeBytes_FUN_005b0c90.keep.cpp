// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
// Address: 005b0c90
// MANUAL RECONSTRUCTION
// Address Range: [[005b0c90, 005b0cb3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)

{
  return g_WaveInBitsPerSample / 8 * g_WaveInBufferSizeSamples * g_WaveInChannels;
}
