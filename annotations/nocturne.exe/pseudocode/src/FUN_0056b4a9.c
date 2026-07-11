// Name: FUN_0056b4a9
// Address: 0056b4a9
// Address Range: [[0056b4a9, 0056b4ea]]
// Convention: unknown
// Signature: void FUN_0056b4a9(int *param_1,byte param_2)

#include "nocturne.h"

void FUN_0056b4a9(int *param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    *param_1 = (int)&DAT_005a4908;
    iVar1 = FUN_0056b503(param_1 + 3);
    param_1 = (int *)(iVar1 + -0xc);
  }
  *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
  param_1[1] = (int)&PTR_FUN_005a4914;
  *(byte ***)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) = &PTR_LAB_005a491c;
  return;
}
