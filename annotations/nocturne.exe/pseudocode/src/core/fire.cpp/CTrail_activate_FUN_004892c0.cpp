// Name: core_fire.cpp_CTrail_activate_FUN_004892c0
// Address: 004892c0
// Address Range: [[004892c0, 00489304]]
// Convention: unknown
// Signature: void core_fire_cpp_CTrail_activate_FUN_004892c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void core_fire_cpp_CTrail_activate_FUN_004892c0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

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
