// Name: core_melee.cpp_CMelee_ctor_FUN_004cec60
// Address: 004cec60
// Address Range: [[004cec60, 004cedae]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_melee_cpp_CMelee_ctor_FUN_004cec60(CWeapon *param_1)

#include "nocturne.h"

CWeapon * __cdecl core_melee_cpp_CMelee_ctor_FUN_004cec60(CWeapon *param_1)

{
  char cVar1;
  CWeapon *pCVar2;
  CWeapon *pCVar3;
  char *pcVar4;
  char *pcVar5;
  float *pfVar6;
  
  pCVar3 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  (pCVar3->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_005a03f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&pCVar3->model,"melee.kfm");
  pCVar3->weapon_type = 7;
  pCVar3[1].base.location.position.y = -NAN;
  pCVar3->ammo_count = 0;
  pCVar3->is_spread_weapon = 0;
  pCVar3->fire_mode = 0;
  pCVar3->can_penetrate = 0;
  pCVar3->bolt_velocity = 5.0;
  pCVar3->fire_cooldown = 0;
  pCVar3->can_attach_light = 0;
  pCVar3[1].base.actor_name[0] = '\x01';
  pCVar3[1].base.actor_name[1] = '\0';
  pCVar3[1].base.actor_name[2] = '\0';
  pCVar3[1].base.actor_name[3] = '\0';
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[4] = '\0';
  (pCVar2->base).actor_name[5] = '\0';
  (pCVar2->base).actor_name[6] = ' ';
  (pCVar2->base).actor_name[7] = 'A';
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[8] = '\0';
  (pCVar2->base).actor_name[9] = '\0';
  (pCVar2->base).actor_name[10] = 'p';
  (pCVar2->base).actor_name[0xb] = 'A';
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[0xc] = '\0';
  (pCVar2->base).actor_name[0xd] = '\0';
  (pCVar2->base).actor_name[0xe] = '\0';
  (pCVar2->base).actor_name[0xf] = '?';
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[0x10] = '\0';
  (pCVar2->base).actor_name[0x11] = '\0';
  (pCVar2->base).actor_name[0x12] = '\0';
  (pCVar2->base).actor_name[0x13] = '\0';
  pcVar4 = "shovel?.wav";
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[0x18] = '\0';
  (pCVar2->base).actor_name[0x19] = '\0';
  (pCVar2->base).actor_name[0x1a] = '\0';
  (pCVar2->base).actor_name[0x1b] = '\0';
  pCVar2 = pCVar3 + 1;
  (pCVar2->base).actor_name[0x1c] = '\0';
  (pCVar2->base).actor_name[0x1d] = '\0';
  (pCVar2->base).actor_name[0x1e] = '\0';
  (pCVar2->base).actor_name[0x1f] = '\0';
  pfVar6 = &pCVar3[1].base.location.position.z;
  pCVar3[1].base.location.position.y = 0.0;
  do {
    cVar1 = *pcVar4;
    *(char *)pfVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)pfVar6 + 1) = cVar1;
    pfVar6 = (float *)((int)pfVar6 + 2);
  } while (cVar1 != '\0');
  pcVar5 = "shvl-f?.wav";
  pcVar4 = pCVar3[1].base.create_event + 0x14;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "shvl-s?.wav";
  pfVar6 = &pCVar3[1].base.platform_orientation_delta.y;
  do {
    cVar1 = *pcVar4;
    *(char *)pfVar6 = cVar1;
    if (cVar1 == '\0') {
      return pCVar3;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)pfVar6 + 1) = cVar1;
    pfVar6 = (float *)((int)pfVar6 + 2);
  } while (cVar1 != '\0');
  return pCVar3;
}
