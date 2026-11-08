// Name: FUN_00558c10
// Address: 00558c10
// Address Range: [[00558c10, 00558c8e]]
// Convention: unknown
// Signature: undefined4 FUN_00558c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558c10(void)

{
  int iVar1;
  
  iVar1 = FUN_00558af0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00558b00();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00558e90();
  iVar1 = FUN_00558b20(_DAT_0060425c,_DAT_00604260,_DAT_00604264,_DAT_02cf3c70);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 4))(_DAT_02cf3c68);
    if (iVar1 != 0) {
      _DAT_02cf3c6c = 1;
      FUN_00556fd0();
      return 1;
    }
  }
  FUN_00556fd0();
  return 0;
}
