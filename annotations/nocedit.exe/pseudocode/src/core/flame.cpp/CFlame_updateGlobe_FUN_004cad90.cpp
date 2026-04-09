// Name: core_flame.cpp_CFlame_updateGlobe_FUN_004cad90
// Address: 004cad90
// Address Range: [[004cad90, 004cae6e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_004cad90(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_004cad90(CFlame *this_ptr)

{
  int iVar1;
  float fVar1;
  int iVar2;
  int iVar3;
  CVector3f local_28;
  int local_14;
  
  local_28.x = (this_ptr->base).location.position.x;
  local_28.z = (this_ptr->base).location.position.z;
  local_28.y = (this_ptr->flame_size).y * (float)0.5 +
               (this_ptr->base).location.position.y;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310(&this_ptr->globe,&local_28);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                    (-this_ptr->randomness,this_ptr->randomness);
  iVar1 = (int)ROUND(ROUND((fVar1 + this_ptr->intensity) * (float)65535));
  (this_ptr->globe).intensity_multiplier = iVar1;
  iVar2 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar3 = iVar2 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar2 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            (&this_ptr->globe,
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)2);
  (this_ptr->globe).corona_mode = 2;
  return;
}
