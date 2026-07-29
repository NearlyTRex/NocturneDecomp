// Name: core_elephant.cpp_FUN_00477710
// Address: 00477710
// Address Range: [[00477710, 00477799]]
// Convention: unknown
// Signature: CWeapon * core_elephant_cpp_FUN_00477710(CWeapon *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWeapon * core_elephant_cpp_FUN_00477710(CWeapon *param_1)

{
  CWeapon *pCVar1;
  float fVar2;
  CWeapon *pCVar3;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar3->base).vtable._ub = &g_CElephantGunVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar3->model,"elephantgun.kfm");
  pCVar3[1].base.actor_name[0] = '\0';
  pCVar3[1].base.actor_name[1] = '\0';
  pCVar3[1].base.actor_name[2] = ' ';
  pCVar3[1].base.actor_name[3] = 'A';
  pCVar3->is_spread_weapon = 1;
  pCVar3->fire_mode = 2;
  pCVar3->weapon_type = 1;
  pCVar3->can_penetrate = 1;
  pCVar3->bolt_velocity = 15.0;
  fVar2 = _DAT_0059cb2c;
  pCVar3->fire_cooldown = 0;
  pCVar1 = pCVar3 + 1;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar3->weight = fVar2;
  return pCVar3;
}
