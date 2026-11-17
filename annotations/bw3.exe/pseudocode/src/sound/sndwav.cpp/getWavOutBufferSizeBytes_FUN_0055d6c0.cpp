// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_0055d6c0
// Address: 0055d6c0
// Address Range: [[0055d6c0, 0055d6e3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_0055d6c0(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_0055d6c0(void)

{
  return ((int)((g_INT_02cf54f0 + (g_INT_02cf54f0 >> 0x1f) * -8) -
               (uint)((g_INT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf54fc * g_INT_02cf54f4;
}
