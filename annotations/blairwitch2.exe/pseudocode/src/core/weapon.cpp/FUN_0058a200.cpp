// Name: core_weapon.cpp_FUN_0058a200
// Address: 0058a200
// Address Range: [[0058a200, 0058a20e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_0058a200(CWeapon *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_weapon_cpp_FUN_0058a200(CWeapon *this_ptr,int weapon_state)

{
  *(int *)&this_ptr->field_0x430 = weapon_state;
  return;
}
