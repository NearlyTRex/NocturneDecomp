// Name: FUN_00565264
// Address: 00565264
// Address Range: [[00565264, 005652fd]]
// Convention: unknown
// Signature: int * FUN_00565264(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_00565264(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x10] = (int)&PTR_FUN_005a47b8;
    param_1[0x13] = (int)&PTR_LAB_005a47c0;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_LAB_005a47c8;
    iVar1 = FUN_0056b6e8(param_1 + 0x11,1);
    param_1 = (int *)FUN_0056b810(iVar1 + -0x44,1);
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
    uVar2 = FUN_0056445f(param_1,&DAT_0059b4d0);
    FUN_00564486(uVar2);
  }
  return param_1;
}
