// Name: core_fire.cpp_FUN_0049a390
// Address: 0049a390
// Address Range: [[0049a390, 0049a449]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049a390(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_fire_cpp_FUN_0049a390(CMuzzleFlash *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  byte *this_ptr_00;
  CDemonSet *this_ptr_01;
  byte bVar1;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar1 = 0;
  this_ptr_00 = &this_ptr->field_0x1c;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0((CDemonGlobe *)this_ptr_00,position);
  *(uint *)&this_ptr->field_0x58 = 0x8000;
  this_ptr->field_0x38 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)this_ptr_00,8.0);
  this_ptr_01 = g_CDemonSetPtr;
  *(uint *)&this_ptr->field_0x3c = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(this_ptr_01,(CDemonGlobe *)this_ptr_00);
  if ((CVector3f *)&this_ptr->field_0x4 != position) {
    *(uint *)&this_ptr->field_0x4 = *(uint *)position;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0xc = *(uint *)&position->field_0x8;
  }
  core_dirmat_cpp_FUN_0045b9b0(rotation_matrix);
  local_1c = local_28;
  (&stack0xffffffe8)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)&this_ptr->field_0x10 == &stack0xffffffe4) {
    *(uint *)this_ptr = 2;
    return;
  }
  *(uint *)&this_ptr->field_0x10 = local_1c;
  *(uint *)&this_ptr->field_0x14 = local_18;
  *(uint *)&this_ptr->field_0x18 = local_14;
  *(uint *)this_ptr = 2;
  return;
}
