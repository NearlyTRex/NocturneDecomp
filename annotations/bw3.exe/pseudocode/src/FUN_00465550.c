// Name: FUN_00465550
// Address: 00465550
// Address Range: [[00465550, 00465584]]
// Convention: unknown
// Signature: void FUN_00465550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465550(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00556700(_DAT_01b8513c);
  if (iVar1 != 0) {
    return;
  }
  _DAT_01b8513c = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x92c);
  return;
}
