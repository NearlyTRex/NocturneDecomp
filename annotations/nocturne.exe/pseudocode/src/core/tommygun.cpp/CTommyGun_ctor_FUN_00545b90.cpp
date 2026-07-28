// Name: core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90
// Address: 00545b90
// Address Range: [[00545b90, 00545c23]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWeapon * __cdecl core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(CWeapon *param_1)

{
  CWeapon *pCVar1;
  float fVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar3->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a32e4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar3->model,"tommygun.kfm");
  pCVar3->is_spread_weapon = 0;
  pCVar3->fire_mode = 0;
  pCVar3->weapon_type = 4;
  pCVar3->can_penetrate = 1;
  pCVar3->bolt_velocity = 100.0;
  pCVar3->fire_cooldown = 1;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[4] = '\0';
  fVar2 = _DAT_005a32dc;
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar3[1].base.actor_name[0] = '\0';
  pCVar3[1].base.actor_name[1] = '\0';
  pCVar3[1].base.actor_name[2] = '\0';
  pCVar3[1].base.actor_name[3] = '\0';
  pCVar3->weight = fVar2;
  return pCVar3;
}
