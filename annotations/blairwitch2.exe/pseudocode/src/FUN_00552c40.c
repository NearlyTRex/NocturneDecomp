// Name: FUN_00552c40
// Address: 00552c40
// Address Range: [[00552c40, 00552c9c]]
// Convention: unknown
// Signature: undefined4 FUN_00552c40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00552c40(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005526b0();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = 0x2641924;
    do {
      FUN_0054d9b0(iVar1);
      iVar1 = iVar1 + 0x1ac;
    } while (iVar1 != 0x2648424);
    if (_DAT_02648e80 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02648e80)(_DAT_02648e80);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02648e88 = 0;
        _DAT_02648e80 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
