// Name: core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0
// Address: 0046ebd0
// Address Range: [[0046ebd0, 0046ec79]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0(CWeapon *param_1)

#include "nocturne.h"

CWeapon * __cdecl core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0(CWeapon *param_1)

{
  CWeapon *pCVar1;
  CWeapon *pCVar2;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar2->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059c924;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar2->model,"dynamitestick.kfm");
  pCVar2->weight = 1.0;
  pCVar1 = pCVar2 + 1;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  *(uint *)(pCVar2[1].base.actor_name + 8) = *(uint *)(pCVar2[1].base.actor_name + 0xc);
  *(uint *)(pCVar2[1].base.actor_name + 4) = *(uint *)(pCVar2[1].base.actor_name + 8);
  pCVar2[1].base.actor_name[0] = '\0';
  pCVar2[1].base.actor_name[1] = '\0';
  pCVar2[1].base.actor_name[2] = -0x80;
  pCVar2[1].base.actor_name[3] = -0x41;
  pCVar2->is_spread_weapon = 0;
  pCVar2->fire_mode = 0;
  pCVar2->weapon_type = 3;
  pCVar2->can_penetrate = 0;
  pCVar2->bolt_velocity = 200.0;
  pCVar2->fire_cooldown = 0;
  pCVar2->can_attach_light = 0;
  pCVar1 = pCVar2 + 1;
  (pCVar1->base).actor_name[0x10] = '\0';
  (pCVar1->base).actor_name[0x11] = '\0';
  (pCVar1->base).actor_name[0x12] = '\0';
  (pCVar1->base).actor_name[0x13] = '\0';
  return pCVar2;
}
