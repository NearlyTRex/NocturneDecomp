// Name: core_flame.cpp_CFlame_updateGlobe_FUN_0048e230
// Address: 0048e230
// Address Range: [[0048e230, 0048e30e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(CFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  double dVar3;
  CVector3f local_28;
  int iStack_18;
  float local_14;
  
  local_28.x = (this_ptr->base).location.position.x;
  local_28.z = (this_ptr->base).location.position.z;
  local_28.y = (this_ptr->flame_size).y * (float)0.5 +
               (this_ptr->base).location.position.y;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(&this_ptr->globe,&local_28);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (-this_ptr->randomness,this_ptr->randomness);
  dVar3 = round
                    ((double)((local_14 + this_ptr->intensity) * (float)65535));
  iStack_18 = (int)ROUND(dVar3);
  (this_ptr->globe).intensity_multiplier = iStack_18;
  iVar1 = (iStack_18 + (iStack_18 >> 0x1f) * -0x100) - (uint)((iStack_18 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
            (&this_ptr->globe,
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)2);
  (this_ptr->globe).corona_mode = 2;
  return;
}
