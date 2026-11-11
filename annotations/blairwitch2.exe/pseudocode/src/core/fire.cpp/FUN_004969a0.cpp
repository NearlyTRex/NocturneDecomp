// Name: core_fire.cpp_FUN_004969a0
// Address: 004969a0
// Address Range: [[004969a0, 00496a59]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004969a0(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_fire_cpp_FUN_004969a0(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  byte bVar1;
  float afStackY_1010 [1016];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  this_ptr_00 = &this_ptr->light;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr_00,position);
  (this_ptr->light).intensity_multiplier = 0x8000;
  (this_ptr->light).intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(this_ptr_00,8.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->light).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(this_ptr_01,this_ptr_00);
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  core_dirmat_cpp_FUN_004496e0(rotation_matrix);
  local_1c = local_28;
  (&stack0xffffffe8)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&this_ptr->rotation == (CVector3f *)&stack0xffffffe4) {
    this_ptr->frames_remaining = 2;
    return;
  }
  (this_ptr->rotation).x = local_1c;
  (this_ptr->rotation).y = local_18;
  (this_ptr->rotation).z = local_14;
  this_ptr->frames_remaining = 2;
  return;
}
