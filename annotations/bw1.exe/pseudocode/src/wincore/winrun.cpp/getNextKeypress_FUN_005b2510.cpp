// Name: wincore_winrun.cpp_getNextKeypress_FUN_005b2510
// Address: 005b2510
// Address Range: [[005b2510, 005b2576]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005b2510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005b2510(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (_DAT_02c9a618 == _DAT_02c9a61c) {
    do {
      if (_DAT_02c9be70 != 0) break;
      wincore_wddvmem_cpp_FUN_005acff0();
    } while (_DAT_02c9a618 == _DAT_02c9a61c);
  }
  uVar2 = (undefined3)((uint)_DAT_02c9a618 >> 8);
  if (_DAT_02c9a618 != _DAT_02c9a61c) {
    iVar1 = _DAT_02c9a618 + 1;
    uVar3 = (byte)*(uint *)(_DAT_02c9a618 * 4 + 0x2c9a5c8);
    _DAT_02c9a618 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02c9a618 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
