// Name: FUN_00488b50
// Address: 00488b50
// Address Range: [[00488b50, 00488bad]]
// Convention: unknown
// Signature: void FUN_00488b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00488b50(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  if (param_1 + 7 != param_3) {
    param_1[7] = *param_3;
    param_1[8] = param_3[1];
    param_1[9] = param_3[2];
  }
  *param_1 = 1;
  param_1[5] = 0x3e800000;
  param_1[6] = param_4;
  param_1[10] = param_5;
  return;
}
