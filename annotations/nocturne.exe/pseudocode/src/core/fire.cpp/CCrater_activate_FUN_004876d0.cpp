// Name: core_fire.cpp_CCrater_activate_FUN_004876d0
// Address: 004876d0
// Address Range: [[004876d0, 00487a1b]]
// Convention: unknown
// Signature: void core_fire_cpp_CCrater_activate_FUN_004876d0(undefined4 *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

void core_fire_cpp_CCrater_activate_FUN_004876d0(uint *param_1,uint *param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  float local_54;
  uint local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_1 + 3 != param_2) {
    param_1[3] = *param_2;
    param_1[4] = param_2[1];
    param_1[5] = param_2[2];
  }
  core_fire_cpp_CCrater_render_FUN_00487af0(param_1);
  *param_1 = 1;
  uVar1 = 0x01E57284;
  param_1[1] = 0;
  param_1[2] = 0x3dcccccd;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar1,param_1 + 3,0);
  param_1[4] = local_14;
  puVar3 = param_1;
  do {
    local_18 = -param_3;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,param_3);
    puVar3[7] = local_14 * (float)0.5 + (float)param_1[3];
    puVar3[8] = param_1[4];
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,param_3);
    puVar4 = puVar3 + 3;
    puVar3[9] = local_14 * (float)0.5 + (float)param_1[5];
    puVar3 = puVar4;
  } while (puVar4 != param_1 + 9);
  local_48 = (float)param_1[3] + local_18;
  local_44 = param_1[4];
  local_40 = (float)param_1[5] + local_18;
  if ((float *)(param_1 + 0x10) != &local_48) {
    param_1[0x10] = local_48;
    param_1[0x11] = local_44;
    param_1[0x12] = local_40;
  }
  local_24 = (float)param_1[3] + param_3;
  local_20 = param_1[4];
  local_1c = (float)param_1[5] + -param_3;
  if ((float *)(param_1 + 0x13) != &local_24) {
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
    param_1[0x15] = local_1c;
  }
  local_3c = (float)param_1[3] + param_3;
  local_38 = param_1[4];
  local_34 = (float)param_1[5] + param_3;
  if ((float *)(param_1 + 0x16) != &local_3c) {
    param_1[0x16] = local_3c;
    param_1[0x17] = local_38;
    param_1[0x18] = local_34;
  }
  local_30 = -param_3;
  local_2c = 0;
  local_28 = param_3;
  local_54 = (float)param_1[3] + local_30;
  local_50 = param_1[4];
  local_4c = (float)param_1[5] + param_3;
  if ((float *)(param_1 + 0x19) != &local_54) {
    param_1[0x19] = local_54;
    param_1[0x1a] = local_50;
    param_1[0x1b] = local_4c;
  }
  local_14 = local_30;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (0x01E57284,param_1 + 0x10,0,local_18,0,local_18,param_3,0,param_3,
                               param_3,0,-param_3);
  uVar1 = 0x01E57284;
  param_1[0x11] = local_14 + (float)0.14999999999999999;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar1,param_1 + 0x13,0);
  uVar1 = 0x01E57284;
  param_1[0x14] = local_14 + (float)0.14999999999999999;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar1,param_1 + 0x16,0);
  uVar1 = 0x01E57284;
  param_1[0x17] = local_14 + (float)0.14999999999999999;
  fVar2 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                           (uVar1,param_1 + 0x19,0);
  param_1[0x1a] = fVar2 + (float)0.14999999999999999;
  if (1.0 < ABS((float)param_1[0x11] - (float)param_1[4])) {
    param_1[0x11] = param_1[4];
  }
  if (1.0 < ABS((float)param_1[0x14] - (float)param_1[4])) {
    param_1[0x14] = param_1[4];
  }
  if (1.0 < ABS((float)param_1[0x17] - (float)param_1[4])) {
    param_1[0x17] = param_1[4];
  }
  if (ABS((float)param_1[0x1a] - (float)param_1[4]) <= 1.0) {
    return;
  }
  param_1[0x1a] = param_1[4];
  return;
}
