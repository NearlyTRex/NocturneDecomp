// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
// Address: 00413d40
// Address Range: [[00413d40, 00413d93]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon *this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CBaronWeaponVTable._ub;
  (pCVar1->base).weapon_type = WEAPON_TYPE_BARON;
  (pCVar1->base).can_penetrate = 0;
  (pCVar1->base).bolt_velocity = 200.0;
  (pCVar1->base).fire_cooldown = 0;
  (pCVar1->base).can_attach_light = 0;
  pCVar1->baron = (CBaron *)0x0;
  return pCVar1;
}
