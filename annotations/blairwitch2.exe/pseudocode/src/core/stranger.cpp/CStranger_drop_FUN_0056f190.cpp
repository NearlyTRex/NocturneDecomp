// Name: core_stranger.cpp_CStranger_drop_FUN_0056f190
// Address: 0056f190
// Address Range: [[0056f190, 0056f1d5]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drop_FUN_0056f190(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drop_FUN_0056f190(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  if ((CWeapon *)carrier == this_ptr->weapon) {
    this_ptr->weapon = (CWeapon *)0x0;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00427a60((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
