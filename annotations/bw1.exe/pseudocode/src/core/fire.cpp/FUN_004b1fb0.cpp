// Name: core_fire.cpp_FUN_004b1fb0
// Address: 004b1fb0
// Address Range: [[004b1fb0, 004b22cd]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b1fb0(CCrater *param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b1fb0(CCrater *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  CDemonSet *pCVar3;
  float fVar4;
  CCrater *pCVar5;
  CVector3f *pCVar6;
  byte bVar7;
  float afStackY_1060 [1015];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  if (&param_1->center_position != (CVector3f *)param_2) {
    (param_1->center_position).x = *param_2;
    (param_1->center_position).y = param_2[1];
    (param_1->center_position).z = param_2[2];
  }
  core_fire_cpp_CCrater_render_FUN_004b23a0(param_1);
  param_1->active = 1;
  pCVar3 = g_CDemonSetPtr;
  param_1->has_smoke = 0;
  param_1->smoke_delay = 0.1;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,&param_1->center_position,0);
  (param_1->center_position).y = local_14;
  pCVar5 = param_1;
  do {
    local_18 = -param_3;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_18,param_3);
    pCVar5->smoke_positions[0].x = local_14 * (float)_DAT_005df3e4 + (param_1->center_position).x;
    pCVar5->smoke_positions[0].y = (param_1->center_position).y;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_18,param_3);
    pCVar6 = &pCVar5->center_position;
    pCVar5->smoke_positions[0].z = local_14 * (float)_DAT_005df3e4 + (param_1->center_position).z;
    pCVar5 = (CCrater *)pCVar6;
  } while (pCVar6 != (CVector3f *)&param_1->smoke_positions[0].z);
  local_3c = (param_1->center_position).x + local_18;
  local_38 = (param_1->center_position).y;
  local_34 = (param_1->center_position).z + local_18;
  local_78 = local_3c;
  (&stack0xffffff8c)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (param_1->corner_positions != (CVector3f *)&stack0xffffff88) {
    param_1->corner_positions[0].x = local_78;
    param_1->corner_positions[0].y = local_74;
    param_1->corner_positions[0].z = local_70;
  }
  local_30 = (param_1->center_position).x + param_3;
  local_2c = (param_1->center_position).y;
  local_28 = (param_1->center_position).z + -param_3;
  local_6c = local_30;
  (&stack0xffffff98)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (param_1->corner_positions + 1 != (CVector3f *)&stack0xffffff94) {
    param_1->corner_positions[1].x = local_6c;
    param_1->corner_positions[1].y = local_68;
    param_1->corner_positions[1].z = local_64;
  }
  local_60 = (param_1->center_position).x + param_3;
  local_5c = (param_1->center_position).y;
  local_58 = (param_1->center_position).z + param_3;
  local_24 = local_60;
  (&stack0xffffffe0)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (param_1->corner_positions + 2 != (CVector3f *)&stack0xffffffdc) {
    param_1->corner_positions[2].x = local_24;
    param_1->corner_positions[2].y = local_20;
    param_1->corner_positions[2].z = local_1c;
  }
  local_54 = (param_1->center_position).x + -param_3;
  local_50 = (param_1->center_position).y;
  local_4c = (param_1->center_position).z + param_3;
  local_48 = local_54;
  (&stack0xffffffbc)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (param_1->corner_positions + 3 != (CVector3f *)&stack0xffffffb8) {
    param_1->corner_positions[3].x = local_48;
    param_1->corner_positions[3].y = local_44;
    param_1->corner_positions[3].z = local_40;
  }
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,param_1->corner_positions,0);
  pCVar3 = g_CDemonSetPtr;
  param_1->corner_positions[0].y = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,param_1->corner_positions + 1,0);
  pCVar3 = g_CDemonSetPtr;
  param_1->corner_positions[1].y = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,param_1->corner_positions + 2,0);
  pCVar3 = g_CDemonSetPtr;
  param_1->corner_positions[2].y = local_14 + (float)_DAT_005df3ec;
  fVar4 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,param_1->corner_positions + 3,0);
  fVar1 = param_1->corner_positions[0].y;
  fVar2 = (param_1->center_position).y;
  param_1->corner_positions[3].y = fVar4 + (float)_DAT_005df3ec;
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
