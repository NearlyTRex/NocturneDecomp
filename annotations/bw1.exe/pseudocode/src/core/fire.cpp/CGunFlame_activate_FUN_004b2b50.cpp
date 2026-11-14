// Name: core_fire.cpp_CGunFlame_activate_FUN_004b2b50
// Address: 004b2b50
// Address Range: [[004b2b50, 004b2d37]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004b2b50(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004b2b50(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_1048 [1006];
  float min_value;
  float max_value;
  CMatrix3x3f local_88;
  float local_60;
  float local_5c [5];
  CVector3f local_48;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar2 = 0;
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.0);
  this_ptr->lifetime = _DAT_005fffb0 * local_10;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,19.0);
  max_value = 0.05235988;
  this_ptr->anim_frame = local_10;
  min_value = -0.05235988;
  puVar1 = (uint *)((int)euler_angles + (uint)bVar2 * -8 + 4);
  local_48.x = euler_angles->x;
  *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 4) = *puVar1;
  *(uint *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       puVar1[(uint)bVar2 * -2 + 1];
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(min_value,max_value);
  local_48.y = local_10 + local_48.y;
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.05235988,0.05235988);
  local_48.x = local_10 + local_48.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_88,&local_48);
  local_5c[4] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.1,6.4);
  local_5c[2] = 0.0;
  local_5c[3] = 0.0;
  local_18 = local_5c[4];
  local_10 = local_5c[4];
  core_dirmat_cpp_FUN_0045f690(&local_88,local_5c + 2);
  local_60 = local_3c;
  local_5c[(uint)bVar2 * -2] = afStack_38[(uint)bVar2 * -2];
  local_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (&this_ptr->velocity != (CVector3f *)&local_60) {
    (this_ptr->velocity).x = local_60;
    (this_ptr->velocity).y = local_5c[0];
    (this_ptr->velocity).z = local_5c[1];
  }
  local_10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,0.1);
  local_14 = local_10;
  local_24 = (this_ptr->velocity).x * local_10;
  local_20 = (this_ptr->velocity).y * local_10;
  local_1c = (this_ptr->velocity).z * local_10;
  afStack_38[2] = local_24;
  afStack_38[(uint)bVar2 * -2 + 3] = afStack_38[(uint)bVar2 * -2 + 6];
  afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  (this_ptr->position).x = (this_ptr->position).x + afStack_38[2];
  (this_ptr->position).y = (this_ptr->position).y + afStack_38[3];
  (this_ptr->position).z = (this_ptr->position).z + local_28;
  this_ptr->flame_type = flame_type;
  return;
}
