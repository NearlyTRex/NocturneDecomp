// Name: core_stranger.cpp_CStranger_dropCarriedObject_FUN_0056f130
// Address: 0056f130
// Address Range: [[0056f130, 0056f186]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_0056f130(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_0056f130(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

{
  if (*(CWeapon **)(&this_ptr->field_0x2620 + hand_index * 0x78) == this_ptr->weapon) {
    this_ptr->weapon = (CWeapon *)0x0;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00428d60
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
