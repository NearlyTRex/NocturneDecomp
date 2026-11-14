// Name: core_keyactor.cpp_CKeyActor_process_FUN_004fc590
// Address: 004fc590
// Address Range: [[004fc590, 004fc62b]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_004fc590(CKeyActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_004fc590(CKeyActor *this_ptr,float delta_time)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  this_ptr_00 = &this_ptr->globe;
  this_ptr->rotation_angle = delta_time * _DAT_005e69c7 + this_ptr->rotation_angle;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
            (this_ptr_00,&(this_ptr->base).location.position);
  fVar3 = (float10)fsin((float10)this_ptr->rotation_angle);
  fVar3 = fVar3 * (float10)_DAT_005e69cb + (float10)_DAT_005e69d3;
  round();
  iVar1 = (int)ROUND(fVar3);
  (this_ptr->globe).intensity_multiplier = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(this_ptr_00,1.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->globe).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(this_ptr_01,this_ptr_00);
  return;
}
