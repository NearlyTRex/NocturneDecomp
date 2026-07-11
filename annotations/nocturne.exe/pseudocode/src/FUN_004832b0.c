// Name: FUN_004832b0
// Address: 004832b0
// Address Range: [[004832b0, 00483310]]
// Convention: unknown
// Signature: void FUN_004832b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_004832b0(uint *param_1,uint *param_2,uint *param_3)

{
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  if (param_1 + 4 != param_3) {
    param_1[4] = *param_3;
    param_1[5] = param_3[1];
    param_1[6] = param_3[2];
  }
  FUN_0044d7a0(param_1 + 7,param_1 + 4);
  *param_1 = 0;
  param_1[0x96] = 0;
  return;
}
