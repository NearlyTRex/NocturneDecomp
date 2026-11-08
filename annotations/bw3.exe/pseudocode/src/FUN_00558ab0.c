// Name: FUN_00558ab0
// Address: 00558ab0
// Address Range: [[00558ab0, 00558ae4]]
// Convention: unknown
// Signature: undefined4 FUN_00558ab0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558ab0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00558ce0();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (_DAT_02cf3c68 == (uint *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02cf3c68)(_DAT_02cf3c68);
      uVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02cf3c68 = (uint *)0x0;
        return 1;
      }
    }
  }
  return uVar2;
}
