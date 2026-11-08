// Name: FUN_0049b2e0
// Address: 0049b2e0
// Address Range: [[0049b2e0, 0049b324]]
// Convention: unknown
// Signature: void FUN_0049b2e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_0049b2e0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  param_1[3] = param_3;
  param_1[5] = param_4;
  param_1[4] = param_5;
  param_1[6] = param_5;
  param_1[7] = param_4;
  param_1[8] = param_6;
  return;
}
