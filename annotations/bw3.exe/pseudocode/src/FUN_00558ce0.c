// Name: FUN_00558ce0
// Address: 00558ce0
// Address Range: [[00558ce0, 00558d18]]
// Convention: unknown
// Signature: undefined4 FUN_00558ce0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558ce0(void)

{
  int iVar1;
  
  FUN_00558e90();
  if (_DAT_02cf3c68 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 8))(_DAT_02cf3c68);
    if (iVar1 == 0) {
      FUN_00556fd0();
      return 0;
    }
  }
  _DAT_02cf3c6c = 0;
  FUN_00556fd0();
  return 1;
}
