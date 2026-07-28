// Name: core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
// Address: 00411350
// Address Range: [[00411350, 004113a3]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(CWeapon *param_1)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(CWeapon *param_1)

{
  CWeapon *pCVar1;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar1->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_baron_cpp_CBaronWeapon_setup_FUN_004113b0_00599c14;
  pCVar1->weapon_type = 8;
  pCVar1->can_penetrate = 0;
  pCVar1->bolt_velocity = 200.0;
  pCVar1->fire_cooldown = 0;
  pCVar1->can_attach_light = 0;
  pCVar1[1].base.actor_name[0] = '\0';
  pCVar1[1].base.actor_name[1] = '\0';
  pCVar1[1].base.actor_name[2] = '\0';
  pCVar1[1].base.actor_name[3] = '\0';
  return;
}
