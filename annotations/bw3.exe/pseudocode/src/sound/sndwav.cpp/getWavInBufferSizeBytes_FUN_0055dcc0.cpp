// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_0055dcc0
// Address: 0055dcc0
// Address Range: [[0055dcc0, 0055dce3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0055dcc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_0055dcc0(void)

{
  return ((int)((_DAT_02cf5648 + (_DAT_02cf5648 >> 0x1f) * -8) -
               (uint)((_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf5658 * _DAT_02cf564c;
}
