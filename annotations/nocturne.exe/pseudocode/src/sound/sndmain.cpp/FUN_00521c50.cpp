// Name: sound_sndmain.cpp_FUN_00521c50
// Address: 00521c50
// Address Range: [[00521c50, 00521c94]]
// Convention: unknown
// Signature: undefined * sound_sndmain_cpp_FUN_00521c50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * sound_sndmain_cpp_FUN_00521c50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    iVar2 = _DAT_02dc1ed8 * 0x168;
    if ((*(int *)(iVar2 + 0x2dc2004) == 0) && (*(int *)(iVar2 + 0x2dc2008) == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (byte *)0x0;
    }
  }
  return &DAT_02dc1edc + iVar2;
}
