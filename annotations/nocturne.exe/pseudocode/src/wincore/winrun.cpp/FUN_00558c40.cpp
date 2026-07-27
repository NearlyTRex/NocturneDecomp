// Name: wincore_winrun.cpp_FUN_00558c40
// Address: 00558c40
// Address Range: [[00558c40, 00558d4f]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00558c40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_00558c40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_01bd1d8c;
  _DAT_02de0858 = _DAT_02de0858 + INT_005c1654;
  if (_DAT_02de0858 < 0x100) {
    if (_DAT_02de0858 < 0) {
      INT_005c1654 = 8;
      _DAT_02de0858 = 0;
    }
  }
  else {
    INT_005c1654 = -8;
    _DAT_02de0858 = 0xff;
  }
  _DAT_01c00c70 =
       (uint)(byte)(&DAT_01bf7720)
                   [((int)((_DAT_02de0858 + (_DAT_02de0858 >> 0x1f) * -8) -
                          (uint)((_DAT_02de0858 >> 0x1f) << 2 < 0)) >> 3) * 0x20];
  iVar3 = -5;
  do {
    iVar2 = _DAT_01bd1d90 + iVar3;
    if ((((_DAT_01c00c58 < iVar1) && (_DAT_01c00c5c < iVar2)) && (iVar1 < _DAT_01c00c60)) &&
       (iVar2 < _DAT_01c00c64)) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar3 = iVar1 + -5;
  do {
    while (((_DAT_01c00c58 < iVar3 && (_DAT_01c00c5c < _DAT_01bd1d90)) &&
           ((iVar3 < _DAT_01c00c60 && (_DAT_01bd1d90 < _DAT_01c00c64))))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar3,_DAT_01bd1d90);
      iVar3 = iVar3 + 1;
      if (iVar3 == iVar1 + 6) {
        return;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != iVar1 + 6);
  return;
}
