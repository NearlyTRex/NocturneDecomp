// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_0055dcc0
// Address: 0055dcc0
// Address Range: [[0055dcc0, 0055dce3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0055dcc0(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0055dcc0(void)

{
  return ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples *
         g_WaveInChannels;
}
