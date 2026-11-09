// Name: crt_unknown.c_FUN_005c8f5f
// Address: 005c8f5f
// Address Range: [[005c8f5f, 005c8fa7]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c8f5f(int *param_1,int param_2)

#include "nocturne.h"

uint FUN_005c8f5f(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((((param_2 != 0) || ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 1) == 0)) &&
      (*(int *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) == 0)) &&
     (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0)) {
    return 1;
  }
  uVar1 = unkafter_zombie_cpp_FUN_005cc4d2(param_1,param_2);
  return uVar1;
}
