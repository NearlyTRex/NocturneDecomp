// Name: core_stranger.cpp_CStranger_drop_FUN_00591de0
// Address: 00591de0
// Address Range: [[00591de0, 00591e25]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drop_FUN_00591de0(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drop_FUN_00591de0(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  if ((CWeapon *)carrier == this_ptr->weapon) {
    this_ptr->weapon = (CWeapon *)0x0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00431490((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
