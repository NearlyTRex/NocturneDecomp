// Name: core_fire.cpp_CCrater_activate_FUN_004876d0
// Address: 004876d0
// Address Range: [[004876d0, 00487a1b]]
// Convention: unknown
// Signature: void core_fire_cpp_CCrater_activate_FUN_004876d0(CCrater *param_1,float *param_2,float param_3)

#include "nocturne.h"

void core_fire_cpp_CCrater_activate_FUN_004876d0(CCrater *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  CCrater *pCVar5;
  CVector3f *pCVar6;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (&param_1->center_position != (CVector3f *)param_2) {
    (param_1->center_position).x = *param_2;
    (param_1->center_position).y = param_2[1];
    (param_1->center_position).z = param_2[2];
  }
  core_fire_cpp_CCrater_render_FUN_00487af0(param_1);
  param_1->active = 1;
  uVar3 = 0x01E57284;
  param_1->has_smoke = 0;
  param_1->smoke_delay = 0.1;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar3,&param_1->center_position,0);
  (param_1->center_position).y = local_14;
  pCVar5 = param_1;
  do {
    local_18 = -param_3;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,param_3);
    pCVar5->smoke_positions[0].x = local_14 * (float)0.5 + (param_1->center_position).x;
    pCVar5->smoke_positions[0].y = (param_1->center_position).y;
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,param_3);
    pCVar6 = &pCVar5->center_position;
    pCVar5->smoke_positions[0].z = local_14 * (float)0.5 + (param_1->center_position).z;
    pCVar5 = (CCrater *)pCVar6;
  } while (pCVar6 != (CVector3f *)&param_1->smoke_positions[0].z);
  local_48 = (param_1->center_position).x + local_18;
  local_44 = (param_1->center_position).y;
  local_40 = (param_1->center_position).z + local_18;
  if (param_1->corner_positions != (CVector3f *)&local_48) {
    param_1->corner_positions[0].x = local_48;
    param_1->corner_positions[0].y = local_44;
    param_1->corner_positions[0].z = local_40;
  }
  local_24 = (param_1->center_position).x + param_3;
  local_20 = (param_1->center_position).y;
  local_1c = (param_1->center_position).z + -param_3;
  if (param_1->corner_positions + 1 != (CVector3f *)&local_24) {
    param_1->corner_positions[1].x = local_24;
    param_1->corner_positions[1].y = local_20;
    param_1->corner_positions[1].z = local_1c;
  }
  local_3c = (param_1->center_position).x + param_3;
  local_38 = (param_1->center_position).y;
  local_34 = (param_1->center_position).z + param_3;
  if (param_1->corner_positions + 2 != (CVector3f *)&local_3c) {
    param_1->corner_positions[2].x = local_3c;
    param_1->corner_positions[2].y = local_38;
    param_1->corner_positions[2].z = local_34;
  }
  local_30 = -param_3;
  local_2c = 0;
  local_28 = param_3;
  local_54 = (param_1->center_position).x + local_30;
  local_50 = (param_1->center_position).y;
  local_4c = (param_1->center_position).z + param_3;
  if (param_1->corner_positions + 3 != (CVector3f *)&local_54) {
    param_1->corner_positions[3].x = local_54;
    param_1->corner_positions[3].y = local_50;
    param_1->corner_positions[3].z = local_4c;
  }
  local_14 = local_30;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (0x01E57284,param_1->corner_positions,0,local_18,0,local_18,param_3,
                               0,param_3,param_3,0,-param_3);
  uVar3 = 0x01E57284;
  param_1->corner_positions[0].y = local_14 + (float)0.14999999999999999;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar3,param_1->corner_positions + 1,0);
  uVar3 = 0x01E57284;
  param_1->corner_positions[1].y = local_14 + (float)0.14999999999999999;
  local_14 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (uVar3,param_1->corner_positions + 2,0);
  uVar3 = 0x01E57284;
  param_1->corner_positions[2].y = local_14 + (float)0.14999999999999999;
  fVar4 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                           (uVar3,param_1->corner_positions + 3,0);
  fVar1 = param_1->corner_positions[0].y;
  fVar2 = (param_1->center_position).y;
  param_1->corner_positions[3].y = fVar4 + (float)0.14999999999999999;
  if (1.0 < ABS(fVar1 - fVar2)) {
    param_1->corner_positions[0].y = (param_1->center_position).y;
  }
  if (1.0 < ABS(param_1->corner_positions[1].y - (param_1->center_position).y)) {
    param_1->corner_positions[1].y = (param_1->center_position).y;
  }
  if (1.0 < ABS(param_1->corner_positions[2].y - (param_1->center_position).y)) {
    param_1->corner_positions[2].y = (param_1->center_position).y;
  }
  if (ABS(param_1->corner_positions[3].y - (param_1->center_position).y) <= 1.0) {
    return;
  }
  param_1->corner_positions[3].y = (param_1->center_position).y;
  return;
}
