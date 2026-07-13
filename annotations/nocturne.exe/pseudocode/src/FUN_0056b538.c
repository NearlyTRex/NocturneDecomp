// Name: FUN_0056b538
// Address: 0056b538
// Address Range: [[0056b538, 0056b5ac]]
// Convention: unknown
// Signature: int * FUN_0056b538(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_0056b538(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[1] = (int)&PTR_FUN_005a4914;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_FUN_005a491c;
    if ((param_2 & 1) == 0) {
      iVar2 = FUN_0056b633(param_1 + 3,1);
      param_1 = (int *)(iVar2 + -0xc);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar1 = FUN_0056445f(param_1,&DAT_005a4960);
    FUN_00564486(uVar1);
  }
  return param_1;
}
