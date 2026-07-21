// Name: core_fire.cpp_CLightningBolt_activate_FUN_00488b10
// Address: 00488b10
// Address Range: [[00488b10, 00488b4e]]
// Convention: unknown
// Signature: void core_fire_cpp_CLightningBolt_activate_FUN_00488b10(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void core_fire_cpp_CLightningBolt_activate_FUN_00488b10(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  param_1[5] = 0x3e800000;
  *param_1 = 0;
  param_1[4] = param_3;
  param_1[6] = param_4;
  return;
}
