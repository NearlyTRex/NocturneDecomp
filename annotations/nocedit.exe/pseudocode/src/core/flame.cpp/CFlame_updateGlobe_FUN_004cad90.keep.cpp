// Name: core_flame.cpp_CFlame_updateGlobe_FUN_004cad90
// Address: 004cad90
// MANUAL RECONSTRUCTION
// Address Range: [[004cad90, 004cae6e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_004cad90(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_004cad90(CFlame *this_ptr)

{
  int iVar1;
  float fVar1;
  CVector3f local_28;
  
  local_28.x = (this_ptr->base).location.position.x;
  local_28.z = (this_ptr->base).location.position.z;
  local_28.y = (this_ptr->flame_size).y * (float)0.5 +
               (this_ptr->base).location.position.y;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(&this_ptr->globe,&local_28);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                    (-this_ptr->randomness,this_ptr->randomness);
  iVar1 = (int)ROUND(ROUND((fVar1 + this_ptr->intensity) * (float)65535));
  (this_ptr->globe).intensity_multiplier = iVar1;
  (this_ptr->globe).intensity.bytes[0] = (uchar)(iVar1 / 256 / 4);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            (&this_ptr->globe,
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)2);
  (this_ptr->globe).corona_mode = 2;
  return;
}
