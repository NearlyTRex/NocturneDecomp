// Name: FUN_005587e0
// Address: 005587e0
// Address Range: [[005587e0, 0055883c]]
// Convention: unknown
// Signature: undefined4 FUN_005587e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005587e0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00558250();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = 0x2cebc24;
    do {
      FUN_00553520(iVar1);
      iVar1 = iVar1 + 0x1b0;
    } while (iVar1 != 0x2cf2824);
    if (_DAT_02cf3280 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02cf3280)(_DAT_02cf3280);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02cf3288 = 0;
        _DAT_02cf3280 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
