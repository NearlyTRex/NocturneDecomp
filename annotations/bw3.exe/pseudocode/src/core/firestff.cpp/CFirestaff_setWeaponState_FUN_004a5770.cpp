// Name: core_firestff.cpp_CFirestaff_setWeaponState_FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57b1]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_setWeaponState_FUN_004a5770(CFirestaff *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_setWeaponState_FUN_004a5770(CFirestaff *this_ptr,int weapon_state)

{
  if ((*(int *)&this_ptr->field_0x2d4 == 2) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x25c4);
    *(uint *)&this_ptr->field_0x25c4 = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0((CWeapon *)this_ptr,weapon_state);
  return;
}
