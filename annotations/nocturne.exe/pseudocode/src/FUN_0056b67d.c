// Name: FUN_0056b67d
// Address: 0056b67d
// Address Range: [[0056b67d, 0056b6cf]]
// Convention: unknown
// Signature: void FUN_0056b67d(int *param_1,byte param_2)

#include "nocturne.h"

void FUN_0056b67d(int *param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if ((param_2 & 1) == 0) {
    *param_1 = (int)&DAT_005a49b8;
    iVar2 = FUN_0056b503(param_1 + 4);
    param_1 = (int *)(iVar2 + -0x10);
  }
  *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
  param_1[2] = (int)&PTR_FUN_005a49c4;
  *(byte ***)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) = &PTR_FUN_005a49cc;
  param_1[1] = 0;
  pbVar1 = (byte *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1);
  *pbVar1 = *pbVar1 | 1;
  return;
}
