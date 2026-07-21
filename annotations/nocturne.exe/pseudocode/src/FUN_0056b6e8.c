// Name: FUN_0056b6e8
// Address: 0056b6e8
// Address Range: [[0056b6e8, 0056b75c]]
// Convention: unknown
// Signature: int * FUN_0056b6e8(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_0056b6e8(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[2] = (int)&PTR_FUN_005a49c4;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_FUN_005a49cc;
    if ((param_2 & 1) == 0) {
      iVar2 = FUN_0056b633(param_1 + 4,1);
      param_1 = (int *)(iVar2 + -0x10);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar1 = __vec_delete(param_1,&DAT_005a4a00);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
  }
  return param_1;
}
