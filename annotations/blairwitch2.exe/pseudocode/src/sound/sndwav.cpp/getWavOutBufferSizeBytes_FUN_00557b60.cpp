// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_00557b60
// Address: 00557b60
// Address Range: [[00557b60, 00557b83]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_00557b60(void)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_00557b60(void)

{
  return ((int)((g_INT_0264b0f4 + (g_INT_0264b0f4 >> 0x1f) * -8) -
               (uint)((g_INT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b100 * g_INT_0264b0f8;
}
