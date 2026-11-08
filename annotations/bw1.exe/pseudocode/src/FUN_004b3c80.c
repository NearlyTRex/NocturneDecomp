// Name: FUN_004b3c80
// Address: 004b3c80
// Address Range: [[004b3c80, 004b3cc4]]
// Convention: unknown
// Signature: void FUN_004b3c80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004b3c80(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
