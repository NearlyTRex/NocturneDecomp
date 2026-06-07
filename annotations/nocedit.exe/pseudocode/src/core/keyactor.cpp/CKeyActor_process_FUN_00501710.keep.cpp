// Name: core_keyactor.cpp_CKeyActor_process_FUN_00501710
// Address: 00501710
// MANUAL RECONSTRUCTION
// Address Range: [[00501710, 005017b3]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

{
  int iVar3;
  float10 fVar3;
  CDemonSet *this_ptr_01;
  CDemonGlobe *this_ptr_00;
  
  this_ptr_00 = &this_ptr->globe;
  this_ptr->rotation_angle = delta_time * (float)3.1415926535000001 + this_ptr->rotation_angle;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310
            (this_ptr_00,&(this_ptr->base).location.position);
  fVar3 = (float10)fsin((float10)this_ptr->rotation_angle);
  iVar3 = (int)ROUND(ROUND(fVar3 * (float10)8192 + (float10)16384));
  (this_ptr->globe).intensity_multiplier = iVar3;
  (this_ptr->globe).intensity.bytes[0] = (uchar)(iVar3 / 256 / 4);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(this_ptr_00,1.0);
  this_ptr_01 = g_CDemonSetPtr;
  (this_ptr->globe).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(this_ptr_01,this_ptr_00);
  return;
}
