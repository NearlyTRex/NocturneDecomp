// Name: core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0
// Address: 0048e9c0
// Address Range: [[0048e9c0, 0048ea5d]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(CWeapon *param_1)

#include "nocturne.h"

CWeapon * __cdecl core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(CWeapon *param_1)

{
  CWeapon *pCVar1;
  float fVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar3->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059d7b4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar3->model,"flamegun.kfm");
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar3[1].base.actor_name[0] = '\0';
  pCVar3[1].base.actor_name[1] = '\0';
  pCVar3[1].base.actor_name[2] = '\0';
  pCVar3[1].base.actor_name[3] = '\0';
  pCVar3->is_spread_weapon = 0;
  pCVar3->fire_mode = 0;
  pCVar3->weapon_type = 2;
  pCVar3->can_penetrate = 0;
  pCVar3->bolt_velocity = 15.0;
  pCVar3->fire_cooldown = 1;
  fVar2 = 8.0f;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar3->weight = fVar2;
  return pCVar3;
}
