// Name: core_flame.cpp_FUN_004b8e40
// Address: 004b8e40
// Address Range: [[004b8e40, 004b8f0e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004b8e40(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_FUN_004b8e40(CFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CVector3f CStack_28;
  float local_14;
  
  CStack_28.x = (this_ptr->base).location.position.x;
  CStack_28.z = (this_ptr->base).location.position.z;
  CStack_28.y = (this_ptr->flame_size).y * (float)_DAT_005df75f +
                (this_ptr->base).location.position.y;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970(&this_ptr->globe,&CStack_28);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                       (-this_ptr->randomness,this_ptr->randomness);
  fVar3 = ((float10)local_14 + (float10)this_ptr->intensity) * (float10)_DAT_005df767;
  round();
  local_14 = (float)(int)ROUND(fVar3);
  (this_ptr->globe).intensity_multiplier = (int)local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
            (&this_ptr->globe,
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)_DAT_005df76f);
  (this_ptr->globe).corona_mode = 2;
  return;
}
