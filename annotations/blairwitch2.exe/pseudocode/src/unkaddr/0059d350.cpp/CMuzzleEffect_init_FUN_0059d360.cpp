// Name: unkaddr_0059d350.cpp_CMuzzleEffect_init_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d419]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_0059d350_cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect *this_ptr,CVector3f *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl unkaddr_0059d350_cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect *this_ptr,CVector3f *param_2,uint param_3)

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
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr_00,param_2);
  (this_ptr->light).intensity_multiplier = 0x8000;
  (this_ptr->light).intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(this_ptr_00,8.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->light).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(this_ptr_01,this_ptr_00);
  if (&this_ptr->position != param_2) {
    (this_ptr->position).x = param_2->x;
    (this_ptr->position).y = param_2->y;
    (this_ptr->position).z = param_2->z;
  }
  core_dirmat_cpp_FUN_004496e0(param_3);
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
