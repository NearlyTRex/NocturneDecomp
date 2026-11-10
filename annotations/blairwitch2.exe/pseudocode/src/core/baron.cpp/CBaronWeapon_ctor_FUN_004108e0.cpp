// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0
// Address: 004108e0
// Address Range: [[004108e0, 00410933]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon *this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CBaronWeaponVTable._ub;
  (pCVar1->base).weapon_type = WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN;
  (pCVar1->base).can_penetrate = 0;
  (pCVar1->base).bolt_velocity = 200.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).can_attach_light = 0;
  pCVar1->baron = (CBaron *)0x0;
  return pCVar1;
}
