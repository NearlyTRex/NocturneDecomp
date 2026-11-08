// Name: FUN_00440d70
// Address: 00440d70
// Address Range: [[00440d70, 00440e01]]
// Convention: unknown
// Signature: undefined4 FUN_00440d70(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_00440d70(int *param_1,uint param_2,int param_3)

{
  if (param_1[3] < *param_1) {
    if ((param_1[3] & param_1[3] - 1U) == 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(uint *)(param_1[3] * 0x10 + param_1[4]) = param_2;
    *(int *)(param_1[4] + 4 + param_1[3] * 0x10) = param_3;
    *(uint *)(param_1[3] * 0x10 + 8 + param_1[4]) = 0xffffffff;
    *(uint *)(param_1[3] * 0x10 + param_1[4] + 0xc) =
         *(uint *)(param_1[4] + param_3 * 0x10 + 8);
    *(int *)(param_3 * 0x10 + param_1[4] + 8) = param_1[3];
    param_1[3] = param_1[3] + 1;
    return 0;
  }
  FUN_00440cd0(param_1);
  return 1;
}
