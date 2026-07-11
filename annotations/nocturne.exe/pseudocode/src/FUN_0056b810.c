// Name: FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056b895]]
// Convention: unknown
// Signature: int * FUN_0056b810(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_0056b810(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x10] = (int)&PTR_FUN_005a4a24;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_LAB_005a4a2c;
    iVar1 = FUN_00570449(param_1 + 1,0);
    param_1 = (int *)(iVar1 + -4);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(iVar1 + 0x44,1);
      param_1 = (int *)(iVar1 + -0x48);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = FUN_0056445f(param_1,&DAT_005a4a60);
    FUN_00564486(uVar2);
  }
  return param_1;
}
