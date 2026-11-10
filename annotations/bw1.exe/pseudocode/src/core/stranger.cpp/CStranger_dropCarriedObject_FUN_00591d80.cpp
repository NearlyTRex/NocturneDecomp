// Name: core_stranger.cpp_CStranger_dropCarriedObject_FUN_00591d80
// Address: 00591d80
// Address Range: [[00591d80, 00591dd6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_00591d80(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_00591d80(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

{
  if (*(CWeapon **)(&this_ptr->field_0x25b0 + hand_index * 0x78) == this_ptr->weapon) {
    this_ptr->weapon = (CWeapon *)0x0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00432820
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
