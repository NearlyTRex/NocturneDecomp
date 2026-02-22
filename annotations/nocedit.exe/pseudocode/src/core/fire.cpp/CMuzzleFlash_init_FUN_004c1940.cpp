// Name: core_fire.cpp_CMuzzleFlash_init_FUN_004c1940
// Address: 004c1940
// Address Range: [[004c1940, 004c19f1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_004c1940(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_004c1940(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  CVector3f *pCVar1;
  CVector3f local_18;
  
  this_ptr_00 = &this_ptr->light;
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(this_ptr_00,(CColor3f *)position);
  (this_ptr->light).intensity_multiplier = 0x8000;
  (this_ptr->light).intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(this_ptr_00,8.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->light).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(this_ptr_01,this_ptr_00);
  if (&this_ptr->position != position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(rotation_matrix,&local_18);
  if (&this_ptr->rotation == pCVar1) {
    this_ptr->frames_remaining = 2;
    return;
  }
  (this_ptr->rotation).x = pCVar1->x;
  (this_ptr->rotation).y = pCVar1->y;
  (this_ptr->rotation).z = pCVar1->z;
  this_ptr->frames_remaining = 2;
  return;
}
