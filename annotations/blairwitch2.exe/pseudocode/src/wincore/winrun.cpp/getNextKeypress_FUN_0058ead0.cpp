// Name: wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
// Address: 0058ead0
// Address Range: [[0058ead0, 0058eb36]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_0058ead0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_0058ead0(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (_DAT_02662dd8 == _DAT_02662ddc) {
    do {
      if (_DAT_02664630 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    } while (_DAT_02662dd8 == _DAT_02662ddc);
  }
  uVar2 = (undefined3)((uint)_DAT_02662dd8 >> 8);
  if (_DAT_02662dd8 != _DAT_02662ddc) {
    iVar1 = _DAT_02662dd8 + 1;
    uVar3 = (byte)*(uint *)(_DAT_02662dd8 * 4 + 0x2662d88);
    _DAT_02662dd8 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02662dd8 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
