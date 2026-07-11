// Name: FUN_004567a0
// Address: 004567a0
// Address Range: [[004567a0, 004567f7]]
// Convention: unknown
// Signature: undefined4 FUN_004567a0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004567a0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_01af4ed8 < 1) {
    uVar2 = FUN_00456800(param_1);
    return uVar2;
  }
  iVar4 = 0;
  if (0 < _DAT_01af4ed8) {
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(iVar3 + 0x1af4edc))(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_01af4ed8);
  }
  return 0;
}
