// Name: FUN_005651ca
// Address: 005651ca
// Address Range: [[005651ca, 00565263]]
// Convention: unknown
// Signature: int * FUN_005651ca(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_005651ca(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x10] = (int)&PTR_FUN_005a4824;
    param_1[0x12] = (int)&PTR_LAB_005a482c;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_LAB_005a4834;
    iVar1 = FUN_0056b538(param_1 + 0x11,1);
    param_1 = (int *)FUN_0056b810(iVar1 + -0x44,1);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(param_1 + 0x14,1);
      param_1 = (int *)(iVar1 + -0x50);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = FUN_0056445f(param_1,&DAT_0059b4f0);
    FUN_00564486(uVar2);
  }
  return param_1;
}
