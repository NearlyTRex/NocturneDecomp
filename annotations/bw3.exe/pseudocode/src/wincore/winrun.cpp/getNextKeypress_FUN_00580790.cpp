// Name: wincore_winrun.cpp_getNextKeypress_FUN_00580790
// Address: 00580790
// Address Range: [[00580790, 005807f6]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00580790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00580790(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (_DAT_02d20328 == _DAT_02d2032c) {
    do {
      if (_DAT_02d21b80 != 0) break;
      wincore_wddvmem_cpp_FUN_0057a8a0();
    } while (_DAT_02d20328 == _DAT_02d2032c);
  }
  uVar2 = (undefined3)((uint)_DAT_02d20328 >> 8);
  if (_DAT_02d20328 != _DAT_02d2032c) {
    iVar1 = _DAT_02d20328 + 1;
    uVar3 = (byte)*(uint *)(_DAT_02d20328 * 4 + 0x2d202d8);
    _DAT_02d20328 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02d20328 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
