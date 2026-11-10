// Name: core_burncrss.cpp_CBurncross_setWeaponState_FUN_00425300
// Address: 00425300
// Address Range: [[00425300, 00425355]]
// Convention: __cdecl
// Signature: void __cdecl core_burncrss_cpp_CBurncross_setWeaponState_FUN_00425300(CBurncross *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_burncrss_cpp_CBurncross_setWeaponState_FUN_00425300(CBurncross *this_ptr,int weapon_state)

{
  if ((*(int *)&this_ptr->field_0x2d4 == 2) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x5a4);
    *(uint *)&this_ptr->field_0x5a4 = 0;
    *(uint *)&this_ptr->field_0x59c = 0;
    *(uint *)&this_ptr->field_0x5a0 = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0((CWeapon *)this_ptr,weapon_state);
  return;
}
