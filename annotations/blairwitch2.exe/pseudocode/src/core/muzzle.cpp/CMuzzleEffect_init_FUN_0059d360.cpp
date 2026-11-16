// Name: core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d419]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  byte bVar1;
  float afStackY_1010 [1016];
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
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
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_004496e0(rotation_matrix,&local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar1 * -2] = *(float *)((int)&local_28 + (uint)bVar1 * -8 + 4);
  local_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&this_ptr->rotation == (CVector3f *)&local_1c) {
    this_ptr->frames_remaining = 2;
    return;
  }
  (this_ptr->rotation).x = local_1c;
  (this_ptr->rotation).y = local_18[0];
  (this_ptr->rotation).z = local_18[1];
  this_ptr->frames_remaining = 2;
  return;
}
