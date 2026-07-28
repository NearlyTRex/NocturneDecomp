// Name: wincore_winrun.cpp_getNextKeypress_FUN_00558b00
// Address: 00558b00
// Address Range: [[00558b00, 00558b66]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (_DAT_02de0848 == _DAT_02de084c) {
    do {
      if (_DAT_02de20a0 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (_DAT_02de0848 == _DAT_02de084c);
  }
  uVar2 = (undefined3)((uint)_DAT_02de0848 >> 8);
  if (_DAT_02de0848 != _DAT_02de084c) {
    iVar1 = _DAT_02de0848 + 1;
    uVar3 = (byte)*(uint *)(_DAT_02de0848 * 4 + 0x2de07f8);
    _DAT_02de0848 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02de0848 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
