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
  byte auStack_28 [20];
  float local_14;
  
  auStack_28._0_4_ = *(uint *)&this_ptr->field_0x20;
  auStack_28._8_4_ = *(uint *)&this_ptr->field_0x28;
  auStack_28._4_4_ =
       *(float *)&this_ptr->field_0x2b8 * (float)_DAT_005d591d + *(float *)&this_ptr->field_0x24;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810
            ((CDemonGlobe *)&this_ptr->field_0x2c4,(CVector3f *)auStack_28);
  local_14 = (float)core_actor_cpp_FUN_0040cf60
                              (-*(float *)&this_ptr->field_0x3e0,
                               *(uint *)&this_ptr->field_0x3e0);
  fVar3 = ((float10)local_14 + (float10)*(float *)&this_ptr->field_0x3dc) * (float10)_DAT_005d5925;
  round();
  local_14 = (float)(int)ROUND(fVar3);
  *(float *)&this_ptr->field_0x300 = local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  this_ptr->field_0x2e0 = (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            ((CDemonGlobe *)&this_ptr->field_0x2c4,
             *(float *)&this_ptr->field_0x2b8 * *(float *)&this_ptr->field_0x308 *
             (float)_DAT_005d592d);
  *(uint *)&this_ptr->field_0x2e4 = 2;
  return;
}
