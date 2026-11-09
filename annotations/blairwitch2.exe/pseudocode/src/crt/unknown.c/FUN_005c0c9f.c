// Name: crt_unknown.c_FUN_005c0c9f
// Address: 005c0c9f
// Address Range: [[005c0c9f, 005c0ce7]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c0c9f(int *param_1,int param_2)

#include "nocturne.h"

uint FUN_005c0c9f(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((((param_2 != 0) || ((*(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 1) == 0)) &&
      (*(int *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) == 0)) &&
     (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0)) {
    return 1;
  }
  uVar1 = unkafter_morph_cpp_FUN_005c41d2(param_1,param_2);
  return uVar1;
}
