// Name: core_flame.cpp_FUN_004a0590
// Address: 004a0590
// Address Range: [[004a0590, 004a065e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004a0590(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_FUN_004a0590(CFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CVector3f CStack_28;
  float local_14;
  
  CStack_28.x = *(float *)&(this_ptr->base).field_0x20;
  CStack_28.z = *(float *)&(this_ptr->base).field_0x28;
  CStack_28.y = (this_ptr->flame_size).y * (float)_DAT_005d591d +
                *(float *)&(this_ptr->base).field_0x24;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(&this_ptr->globe,&CStack_28);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                       (-this_ptr->randomness,this_ptr->randomness);
  fVar3 = ((float10)local_14 + (float10)this_ptr->intensity) * (float10)_DAT_005d5925;
  round();
  local_14 = (float)(int)ROUND(fVar3);
  (this_ptr->globe).intensity_multiplier = (int)local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            (&this_ptr->globe,
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)_DAT_005d592d);
  (this_ptr->globe).corona_mode = 2;
  return;
}
