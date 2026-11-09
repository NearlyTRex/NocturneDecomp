// Name: unkafter_morph.cpp_FUN_005c41d2
// Address: 005c41d2
// Address Range: [[005c41d2, 005c425e]]
// Convention: unknown
// Signature: bool unkafter_morph_cpp_FUN_005c41d2(int *param_1,int param_2)

#include "nocturne.h"

bool unkafter_morph_cpp_FUN_005c41d2(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    param_1[1] = 0;
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8);
    if (iVar1 != 0) {
      unkafter_2d_cpp_FUN_005c599c(iVar1);
    }
    if ((param_2 == 0) && ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 1) != 0)) {
      unkafter_2d_cpp_FUN_005c58e5(param_1);
      iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
      if ((*(uint *)(iVar1 + 0x10) & 4) != 0) {
        FUN_005c0b85(iVar1,2);
      }
    }
    return *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0;
  }
  FUN_005c0b85((int)param_1 + *(int *)(*param_1 + 4),2);
  return false;
}
