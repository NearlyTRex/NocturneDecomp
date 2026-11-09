// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0
// Address: 0042b8d0
// Address Range: [[0042b8d0, 0042b91d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  uint uVar1;
  
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf8))(this_ptr);
  core_actor_cpp_FUN_00409d00(this_ptr,new_position,new_orientation);
  uVar1 = _DAT_005dd234;
  *(uint *)&this_ptr->field_0x2520 = 0;
  *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
  *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
  *(uint *)&this_ptr->field_0x2504 = uVar1;
  return;
}
