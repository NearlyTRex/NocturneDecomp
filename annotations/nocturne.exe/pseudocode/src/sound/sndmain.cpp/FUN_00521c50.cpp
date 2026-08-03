// Name: sound_sndmain.cpp_FUN_00521c50
// Address: 00521c50
// Address Range: [[00521c50, 00521c94]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_00521c50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * sound_sndmain_cpp_FUN_00521c50(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    if ((g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].taken == 0) &&
       (g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].ref_count == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_CSfxSample_ARRAY_02dc1edc + _DAT_02dc1ed8;
}
