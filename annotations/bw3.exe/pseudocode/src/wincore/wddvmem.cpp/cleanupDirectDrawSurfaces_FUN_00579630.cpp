// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_00579630
// Address: 00579630
// Address Range: [[00579630, 00579688]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_00579630(void)

{
  if (_DAT_02d0bcec != (int *)0x0) {
    (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
  _DAT_02d0bce4 = (int *)0x0;
  return;
}
