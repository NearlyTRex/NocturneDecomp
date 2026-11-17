// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_0057a590
// Address: 0057a590
// Address Range: [[0057a590, 0057a5b3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_0057a590(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_0057a590(void)

{
  return ((int)((g_INT_02c828c4 + (g_INT_02c828c4 >> 0x1f) * -8) -
               (uint)((g_INT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02c828d0 * g_INT_02c828c8;
}
