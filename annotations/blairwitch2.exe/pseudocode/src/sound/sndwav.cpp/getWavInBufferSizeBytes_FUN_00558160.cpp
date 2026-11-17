// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_00558160
// Address: 00558160
// Address Range: [[00558160, 00558183]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_00558160(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_00558160(void)

{
  return ((int)((g_INT_0264b24c + (g_INT_0264b24c >> 0x1f) * -8) -
               (uint)((g_INT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b25c * g_INT_0264b250;
}
