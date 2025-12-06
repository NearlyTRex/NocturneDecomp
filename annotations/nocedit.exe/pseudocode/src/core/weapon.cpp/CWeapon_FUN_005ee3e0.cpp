// Name: core_weapon.cpp_CWeapon_FUN_005ee3e0
// Address: 005ee3e0
// Address Range: [[005ee3e0, 005ee3ee]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee3e0(CWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee3e0(CWeapon *this_ptr)

{
  byte uStack00000008;
  byte uStack00000009;
  byte uStack0000000a;
  byte uStack0000000b;
  
  this_ptr->carried_by_actor = uStack00000008;
  this_ptr->field9_0x305[0] = uStack00000009;
  this_ptr->field9_0x305[1] = uStack0000000a;
  this_ptr->field9_0x305[2] = uStack0000000b;
  return;
}
