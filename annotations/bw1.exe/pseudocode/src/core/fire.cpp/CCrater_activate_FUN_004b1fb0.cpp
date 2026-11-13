// Name: core_fire.cpp_CCrater_activate_FUN_004b1fb0
// Address: 004b1fb0
// Address Range: [[004b1fb0, 004b22cd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_activate_FUN_004b1fb0(CCrater *this_ptr,CVector3f *center_position,float radius)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CCrater_activate_FUN_004b1fb0(CCrater *this_ptr,CVector3f *center_position,float radius)

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
  if (&this_ptr->center_position != center_position) {
    (this_ptr->center_position).x = center_position->x;
    (this_ptr->center_position).y = center_position->y;
    (this_ptr->center_position).z = center_position->z;
  }
  core_fire_cpp_CCrater_render_FUN_004b23a0(this_ptr);
  this_ptr->active = 1;
  pCVar3 = g_CDemonSetPtr;
  this_ptr->has_smoke = 0;
  this_ptr->smoke_delay = 0.1;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,&this_ptr->center_position,0);
  (this_ptr->center_position).y = local_14;
  pCVar5 = this_ptr;
  do {
    local_18 = -radius;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_18,radius);
    pCVar5->smoke_positions[0].x = local_14 * (float)_DAT_005df3e4 + (this_ptr->center_position).x;
    pCVar5->smoke_positions[0].y = (this_ptr->center_position).y;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_18,radius);
    pCVar6 = &pCVar5->center_position;
    pCVar5->smoke_positions[0].z = local_14 * (float)_DAT_005df3e4 + (this_ptr->center_position).z;
    pCVar5 = (CCrater *)pCVar6;
  } while (pCVar6 != (CVector3f *)&this_ptr->smoke_positions[0].z);
  local_3c = (this_ptr->center_position).x + local_18;
  local_38 = (this_ptr->center_position).y;
  local_34 = (this_ptr->center_position).z + local_18;
  local_78 = local_3c;
  (&stack0xffffff8c)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (this_ptr->corner_positions != (CVector3f *)&stack0xffffff88) {
    this_ptr->corner_positions[0].x = local_78;
    this_ptr->corner_positions[0].y = local_74;
    this_ptr->corner_positions[0].z = local_70;
  }
  local_30 = (this_ptr->center_position).x + radius;
  local_2c = (this_ptr->center_position).y;
  local_28 = (this_ptr->center_position).z + -radius;
  local_6c = local_30;
  (&stack0xffffff98)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (this_ptr->corner_positions + 1 != (CVector3f *)&stack0xffffff94) {
    this_ptr->corner_positions[1].x = local_6c;
    this_ptr->corner_positions[1].y = local_68;
    this_ptr->corner_positions[1].z = local_64;
  }
  local_60 = (this_ptr->center_position).x + radius;
  local_5c = (this_ptr->center_position).y;
  local_58 = (this_ptr->center_position).z + radius;
  local_24 = local_60;
  (&stack0xffffffe0)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (this_ptr->corner_positions + 2 != (CVector3f *)&stack0xffffffdc) {
    this_ptr->corner_positions[2].x = local_24;
    this_ptr->corner_positions[2].y = local_20;
    this_ptr->corner_positions[2].z = local_1c;
  }
  local_54 = (this_ptr->center_position).x + -radius;
  local_50 = (this_ptr->center_position).y;
  local_4c = (this_ptr->center_position).z + radius;
  local_48 = local_54;
  (&stack0xffffffbc)[(uint)bVar7 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if (this_ptr->corner_positions + 3 != (CVector3f *)&stack0xffffffb8) {
    this_ptr->corner_positions[3].x = local_48;
    this_ptr->corner_positions[3].y = local_44;
    this_ptr->corner_positions[3].z = local_40;
  }
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(g_CDemonSetPtr,this_ptr->corner_positions,0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[0].y = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,this_ptr->corner_positions + 1,0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[1].y = local_14 + (float)_DAT_005df3ec;
  local_14 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,this_ptr->corner_positions + 2,0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[2].y = local_14 + (float)_DAT_005df3ec;
  fVar4 = (float)core_setcolid_cpp_FUN_005562c0(pCVar3,this_ptr->corner_positions + 3,0);
  fVar1 = this_ptr->corner_positions[0].y;
  fVar2 = (this_ptr->center_position).y;
  this_ptr->corner_positions[3].y = fVar4 + (float)_DAT_005df3ec;
  if (1.0 < ABS(fVar1 - fVar2)) {
    this_ptr->corner_positions[0].y = (this_ptr->center_position).y;
  }
  if (1.0 < ABS(this_ptr->corner_positions[1].y - (this_ptr->center_position).y)) {
    this_ptr->corner_positions[1].y = (this_ptr->center_position).y;
  }
  if (1.0 < ABS(this_ptr->corner_positions[2].y - (this_ptr->center_position).y)) {
    this_ptr->corner_positions[2].y = (this_ptr->center_position).y;
  }
  if (ABS(this_ptr->corner_positions[3].y - (this_ptr->center_position).y) <= 1.0) {
    return;
  }
  this_ptr->corner_positions[3].y = (this_ptr->center_position).y;
  return;
}
