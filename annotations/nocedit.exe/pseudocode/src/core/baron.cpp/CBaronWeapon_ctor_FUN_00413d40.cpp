// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40
// Address: 00413d40
// Address Range: [[00413d40, 00413d93]]
// Convention: __cdecl
// Signature: CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon * this_ptr)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(CBaronWeapon *this_ptr)

{
  CBaronWeapon *pCVar1;
  
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar1->base_weapon).base_actor.vtable._ub = &g_CBaronWeaponVTable;
  (pCVar1->base_weapon).field3_0x2d8[8] = '\b';
  (pCVar1->base_weapon).field3_0x2d8[9] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[10] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xb] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xc] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xd] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xe] = '\0';
  (pCVar1->base_weapon).field3_0x2d8[0xf] = '\0';
  (pCVar1->base_weapon).bolt_velocity = 200.0;
  (pCVar1->base_weapon).fire_cooldown = 0.0;
  (pCVar1->base_weapon).can_attach_light = 0;
  pCVar1->field1_0x578 = 0;
  return pCVar1;
}
