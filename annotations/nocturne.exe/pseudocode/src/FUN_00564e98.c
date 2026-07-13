// Name: FUN_00564e98
// Address: 00564e98
// Address Range: [[00564e98, 00564f31]]
// Convention: unknown
// Signature: int * FUN_00564e98(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_00564e98(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x11] = (int)&PTR_FUN_005a46cc;
    param_1[0x13] = (int)&PTR_FUN_005a46d4;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_FUN_005a46dc;
    iVar1 = FUN_0056b538(param_1 + 0x12,1);
    param_1 = (int *)FUN_0056b5ad(iVar1 + -0x48,1);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(param_1 + 0x15,1);
      param_1 = (int *)(iVar1 + -0x54);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = FUN_0056445f(param_1,&DAT_0059b490);
    FUN_00564486(uVar2);
  }
  return param_1;
}
