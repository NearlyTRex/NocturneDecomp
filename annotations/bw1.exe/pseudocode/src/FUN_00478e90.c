// Name: FUN_00478e90
// Address: 00478e90
// Address Range: [[00478e90, 00478ee7]]
// Convention: unknown
// Signature: undefined4 FUN_00478e90(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00478e90(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_01b6892c < 1) {
    uVar2 = FUN_00478ef0(param_1);
    return uVar2;
  }
  iVar4 = 0;
  if (0 < _DAT_01b6892c) {
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(iVar3 + 0x1b68930))(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_01b6892c);
  }
  return 0;
}
