// Name: FUN_00564fd8
// Address: 00564fd8
// Address Range: [[00564fd8, 00565071]]
// Convention: unknown
// Signature: int * FUN_00564fd8(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_00564fd8(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x11] = (int)&PTR_FUN_005a4744;
    param_1[0x14] = (int)&PTR_FUN_005a474c;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_FUN_005a4754;
    iVar1 = FUN_0056b6e8(param_1 + 0x12,1);
    param_1 = (int *)FUN_0056b5ad(iVar1 + -0x48,1);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(param_1 + 0x16,1);
      param_1 = (int *)(iVar1 + -0x58);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = FUN_0056445f(param_1,&DAT_0059b4b0);
    FUN_00564486(uVar2);
  }
  return param_1;
}
