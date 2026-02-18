// Name: core_fire.cpp_CGunFlame_activate_FUN_004c4db0
// Address: 004c4db0
// Address Range: [[004c4db0, 004c4de6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004c4db0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004c4db0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  float fVar4;
  CMatrix3x3f local_6c;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_10;
  float local_c;
  
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.0);
  this_ptr->lifetime = 2.0f * local_c;
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,19.0);
  this_ptr->anim_frame = local_c;
  local_20.x = euler_angles->x;
  local_20.y = euler_angles->y;
  local_20.z = euler_angles->z;
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_20.y = local_c + local_20.y;
  local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05235988,0.05235988);
  local_20.x = local_c + local_20.x;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_6c,&local_20);
  local_38.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.1,6.4);
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_10 = local_38.z;
  local_c = local_38.z;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_6c,&local_2c,&local_38);
  if (&this_ptr->velocity != pCVar3) {
    (this_ptr->velocity).x = pCVar3->x;
    (this_ptr->velocity).y = pCVar3->y;
    (this_ptr->velocity).z = pCVar3->z;
  }
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.1);
  fVar1 = (this_ptr->velocity).y;
  fVar2 = (this_ptr->velocity).z;
  (this_ptr->position).x = (this_ptr->position).x + (this_ptr->velocity).x * fVar4;
  (this_ptr->position).y = (this_ptr->position).y + fVar1 * fVar4;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar4;
  this_ptr->flame_type = flame_type;
  return;
}
