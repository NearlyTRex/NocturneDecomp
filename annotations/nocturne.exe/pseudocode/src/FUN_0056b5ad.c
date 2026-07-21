// Name: FUN_0056b5ad
// Address: 0056b5ad
// Address Range: [[0056b5ad, 0056b632]]
// Convention: unknown
// Signature: int * FUN_0056b5ad(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_0056b5ad(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) == 0) {
    *(int *)((int)param_1 + *(int *)(*param_1 + 4) + -4) = *(int *)(*param_1 + 4);
    param_1[0x11] = (int)&PTR_FUN_005a48bc;
    *(byte ***)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) = &PTR_FUN_005a48c4;
    iVar1 = FUN_005701cf(param_1 + 1,0);
    param_1 = (int *)(iVar1 + -4);
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_0056b633(iVar1 + 0x48,1);
      param_1 = (int *)(iVar1 + -0x4c);
    }
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar2 = __vec_delete(param_1,&DAT_005a4980);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
  }
  return param_1;
}
