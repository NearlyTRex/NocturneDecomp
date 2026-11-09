// Name: core_fire.cpp_FUN_0049f470
// Address: 0049f470
// Address Range: [[0049f470, 0049f4d4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049f470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void core_fire_cpp_FUN_0049f470(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

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
  param_1[5] = param_7;
  param_1[6] = param_4;
  param_1[10] = param_5;
  *param_1 = param_6;
  param_1[0xb] = param_8;
  return;
}
