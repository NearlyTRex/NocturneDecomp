// Name: core_fire.cpp_CMuzzleFlash_init_FUN_0049a390
// Address: 0049a390
// Address Range: [[0049a390, 0049a449]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_0049a390(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_0049a390(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

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
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(this_ptr_00,position);
  (this_ptr->light).intensity_multiplier = 0x8000;
  (this_ptr->light).intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(this_ptr_00,8.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->light).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_01,this_ptr_00);
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  core_dirmat_cpp_FUN_0045b9b0(rotation_matrix);
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
