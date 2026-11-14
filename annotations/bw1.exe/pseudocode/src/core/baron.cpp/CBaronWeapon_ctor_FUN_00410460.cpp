// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00410460
// Address: 00410460
// Address Range: [[00410460, 004104b3]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(CBaronWeapon *this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CBaronWeaponVTable._ub;
  (pCVar1->base).weapon_type = WEAPON_TYPE_BARON;
  (pCVar1->base).can_penetrate = 0;
  (pCVar1->base).bolt_velocity = 200.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).can_attach_light = 0;
  pCVar1->baron = (CBaron *)0x0;
  return pCVar1;
}
