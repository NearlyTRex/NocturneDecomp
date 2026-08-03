// Name: core_crate.cpp_CCrate_setup_FUN_0043c870
// Address: 0043c870
// Address Range: [[0043c870, 0043c938]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_setup_FUN_0043c870(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_setup_FUN_0043c870(CCrate *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D CStack_24;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
  fVar1 = (CStack_24.max.x - CStack_24.min.x) * (float)0.5;
  fVar2 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  this_ptr->ground_check_radius = fVar2;
  (this_ptr->cached_position).x = -9999.9;
  (this_ptr->cached_position).y = -9999.9;
  (this_ptr->cached_position).z = -9999.9;
  (this_ptr->cached_orientation).vec.x = -9999.9;
  (this_ptr->cached_orientation).vec.z = -9999.9;
  (this_ptr->cached_orientation).vec.y = -9999.9;
  this_ptr->cached_ground_height = 9999.9;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
