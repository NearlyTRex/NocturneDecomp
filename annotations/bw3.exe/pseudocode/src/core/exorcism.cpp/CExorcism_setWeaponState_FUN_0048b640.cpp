// Name: core_exorcism.cpp_CExorcism_setWeaponState_FUN_0048b640
// Address: 0048b640
// Address Range: [[0048b640, 0048b68d]]
// Convention: __cdecl
// Signature: void __cdecl core_exorcism_cpp_CExorcism_setWeaponState_FUN_0048b640(CExorcism *this_ptr,int weapon_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_exorcism_cpp_CExorcism_setWeaponState_FUN_0048b640(CExorcism *this_ptr,int weapon_state)

{
  if ((*(int *)&this_ptr->field_0x2d4 == 2) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(_DAT_01c6e35c);
    *(uint *)&this_ptr->field_0x598 = 0;
    _DAT_01c6e35c = 0;
    *(uint *)&this_ptr->field_0x594 = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0((CWeapon *)this_ptr,weapon_state);
  return;
}
