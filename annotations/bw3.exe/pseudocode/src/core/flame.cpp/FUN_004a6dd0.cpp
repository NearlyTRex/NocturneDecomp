// Name: core_flame.cpp_FUN_004a6dd0
// Address: 004a6dd0
// Address Range: [[004a6dd0, 004a6e9e]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004a6dd0(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_FUN_004a6dd0(CFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  byte auStack_28 [20];
  float local_14;
  
  auStack_28._0_4_ = *(uint *)&this_ptr->field_0x20;
  auStack_28._8_4_ = *(uint *)&this_ptr->field_0x28;
  auStack_28._4_4_ =
       *(float *)&this_ptr->field_0x15c * (float)_DAT_005c0c74 + *(float *)&this_ptr->field_0x24;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
            ((CDemonGlobe *)&this_ptr->field_0x168,(CVector3f *)auStack_28);
  local_14 = (float)core_actor_cpp_FUN_0040ce40
                              (-*(float *)&this_ptr->field_0x284,
                               *(uint *)&this_ptr->field_0x284);
  fVar3 = ((float10)local_14 + (float10)*(float *)&this_ptr->field_0x280) * (float10)_DAT_005c0c7c;
  round();
  local_14 = (float)(int)ROUND(fVar3);
  *(float *)&this_ptr->field_0x1a4 = local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  this_ptr->field_0x184 = (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
            ((CDemonGlobe *)&this_ptr->field_0x168,
             *(float *)&this_ptr->field_0x15c * *(float *)&this_ptr->field_0x1ac *
             (float)_DAT_005c0c84);
  *(uint *)&this_ptr->field_0x188 = 2;
  return;
}
