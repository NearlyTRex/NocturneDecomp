// Name: unkafter_zombie.cpp_FUN_005cc4d2
// Address: 005cc4d2
// Address Range: [[005cc4d2, 005cc55e]]
// Convention: unknown
// Signature: bool unkafter_zombie_cpp_FUN_005cc4d2(int *param_1,int param_2)

#include "nocturne.h"

bool unkafter_zombie_cpp_FUN_005cc4d2(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
    param_1[1] = 0;
    iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8);
    if (iVar1 != 0) {
      unkafter_2d_cpp_FUN_005cdc9c(iVar1);
    }
    if ((param_2 == 0) && ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 1) != 0)) {
      unkafter_2d_cpp_FUN_005cdbe5(param_1);
      iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
      if ((*(uint *)(iVar1 + 0x10) & 4) != 0) {
        FUN_005c8e45(iVar1,2);
      }
    }
    return *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0;
  }
  FUN_005c8e45((int)param_1 + *(int *)(*param_1 + 4),2);
  return false;
}
