// Name: FUN_00436680
// Address: 00436680
// Address Range: [[00436680, 004366f0]]
// Convention: unknown
// Signature: undefined4 * FUN_00436680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint * FUN_00436680(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[0x3ec] = param_2;
  param_1[0x3ed] = param_3;
  param_1[0x3ee] = param_4;
  param_1[0x3ef] = param_5;
  if ((int)param_1[0x3ee] < 1) {
    param_1[0x3ee] = 1;
  }
  if ((int)param_1[0x3ef] < 1) {
    param_1[0x3ef] = 1;
  }
  FUN_004368b0(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}
