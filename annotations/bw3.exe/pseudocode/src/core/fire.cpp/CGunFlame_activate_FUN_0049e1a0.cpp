// Name: core_fire.cpp_CGunFlame_activate_FUN_0049e1a0
// Address: 0049e1a0
// Address Range: [[0049e1a0, 0049e385]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_activate_FUN_0049e1a0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type,int flame_style)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_activate_FUN_0049e1a0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type,int flame_style)

{
  float fVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1024 [1006];
  float fVar4;
  float fVar5;
  CMatrix3x3f local_64;
  CVector3f local_3c;
  float local_30;
  float local_2c [4];
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  if (this_ptr != (CGunFlame *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  if (flame_style == 6) {
    this_ptr->lifetime = 0x40400000;
  }
  else {
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.0);
    this_ptr->lifetime = fVar4 * _DAT_005df900;
  }
  if ((((flame_style == 2) || (flame_style == 4)) || (flame_style == 3)) ||
     ((flame_style == 6 || (flame_style == 7)))) {
    this_ptr->frame_count = 1;
  }
  else if (flame_style == 5) {
    this_ptr->frame_count = 6;
  }
  else {
    this_ptr->frame_count = 0x14;
  }
  local_14 = (float)(this_ptr->frame_count + -1);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,(float)(int)local_14);
  this_ptr->anim_frame = local_14;
  fVar5 = 0.05235988;
  fVar4 = -0.05235988;
  puVar2 = (uint *)((int)euler_angles + (uint)bVar3 * -8 + 4);
  local_3c.x = euler_angles->x;
  *(uint *)((int)&local_3c + (uint)bVar3 * -8 + 4) = *puVar2;
  *(uint *)((int)&local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       puVar2[(uint)bVar3 * -2 + 1];
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar4,fVar5);
  local_3c.y = local_14 + local_3c.y;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.05235988,0.05235988);
  local_3c.x = local_14 + local_3c.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_64,&local_3c);
  if (&this_ptr->velocity != &local_3c) {
    (this_ptr->velocity).x = local_3c.x;
    (this_ptr->velocity).y = local_3c.y;
    (this_ptr->velocity).z = local_3c.z;
  }
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,0.1);
  local_18 = local_14;
  local_2c[2] = (this_ptr->velocity).x * local_14;
  local_2c[3] = (this_ptr->velocity).y * local_14;
  local_1c = (this_ptr->velocity).z * local_14;
  local_30 = local_2c[2];
  local_2c[(uint)bVar3 * -2] = local_2c[(uint)bVar3 * -2 + 3];
  local_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  this_ptr->flame_type = flame_type;
  fVar4 = (this_ptr->position).x;
  fVar5 = (this_ptr->position).y;
  fVar1 = (this_ptr->position).z;
  this_ptr->flame_style = flame_style;
  (this_ptr->position).x = fVar4 + local_30;
  (this_ptr->position).y = fVar5 + local_2c[0];
  (this_ptr->position).z = fVar1 + local_2c[1];
  return;
}
