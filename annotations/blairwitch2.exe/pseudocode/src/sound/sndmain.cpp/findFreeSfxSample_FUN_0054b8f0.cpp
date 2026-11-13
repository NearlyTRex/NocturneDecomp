// Name: sound_sndmain.cpp_findFreeSfxSample_FUN_0054b8f0
// Address: 0054b8f0
// Address Range: [[0054b8f0, 0054b954]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0054b8f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0054b8f0(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    if ((((g_SfxSamples[_DAT_02641920].taken == 0) && (g_SfxSamples[_DAT_02641920].ref_count == 0))
        && (g_SfxSamples[_DAT_02641920].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02641920].locked_length == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + _DAT_02641920;
}
