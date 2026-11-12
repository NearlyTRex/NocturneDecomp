// Name: sound_sndmain.cpp_FUN_00551450
// Address: 00551450
// Address Range: [[00551450, 005514b4]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_00551450(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * sound_sndmain_cpp_FUN_00551450(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[_DAT_02cebc20].taken == 0) && (g_SfxSamples[_DAT_02cebc20].ref_count == 0))
        && (g_SfxSamples[_DAT_02cebc20].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02cebc20].locked_length == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + _DAT_02cebc20;
}
