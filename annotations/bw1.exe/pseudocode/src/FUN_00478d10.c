// Name: FUN_00478d10
// Address: 00478d10
// Address Range: [[00478d10, 00478d44]]
// Convention: unknown
// Signature: void FUN_00478d10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478d10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005735a0(_DAT_01b688ec);
  if (iVar1 != 0) {
    return;
  }
  _DAT_01b688ec = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x92c);
  return;
}
