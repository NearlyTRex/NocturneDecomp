// Name: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_00557b60
// Address: 00557b60
// Address Range: [[00557b60, 00557b83]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_00557b60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_00557b60(void)

{
  return ((int)((_DAT_0264b0f4 + (_DAT_0264b0f4 >> 0x1f) * -8) -
               (uint)((_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b100 * _DAT_0264b0f8;
}
