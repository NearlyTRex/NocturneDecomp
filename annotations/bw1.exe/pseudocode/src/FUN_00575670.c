// Name: FUN_00575670
// Address: 00575670
// Address Range: [[00575670, 005756cc]]
// Convention: unknown
// Signature: undefined4 FUN_00575670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575670(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005750e0();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = 0x2c78ff4;
    do {
      FUN_00570020(iVar1);
      iVar1 = iVar1 + 0x1b0;
    } while (iVar1 != 0x2c7fbf4);
    if (_DAT_02c80650 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02c80650)(_DAT_02c80650);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02c80658 = 0;
        _DAT_02c80650 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
