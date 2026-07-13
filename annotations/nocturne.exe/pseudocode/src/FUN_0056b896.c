// Name: FUN_0056b896
// Address: 0056b896
// Address Range: [[0056b896, 0056b8fe]]
// Convention: unknown
// Signature: int * FUN_0056b896(undefined4 *param_1,byte param_2)

#include "nocturne.h"

int * FUN_0056b896(uint *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = &DAT_005a4a18;
    iVar2 = FUN_0056b503(param_1 + 0x12);
    param_1 = (uint *)(iVar2 + -0x48);
  }
  iVar2 = FUN_0057042d(param_1 + 1);
  piVar1 = (int *)(iVar2 + -4);
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4);
  *(byte ***)(iVar2 + 0x3c) = &PTR_FUN_005a4a24;
  *(byte ***)(iVar2 + 0x24 + *(int *)(*piVar1 + 4)) = &PTR_FUN_005a4a2c;
  FUN_0056ff2a(*(int *)(*piVar1 + 4) + (int)piVar1,iVar2);
  return piVar1;
}
