// Name: FUN_00552f10
// Address: 00552f10
// Address Range: [[00552f10, 00552f44]]
// Convention: unknown
// Signature: undefined4 FUN_00552f10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00552f10(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00553140();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (_DAT_02649868 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02649868)(_DAT_02649868);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02649868 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
