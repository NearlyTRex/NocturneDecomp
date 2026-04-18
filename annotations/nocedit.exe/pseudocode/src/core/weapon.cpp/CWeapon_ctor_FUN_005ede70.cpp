// Name: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
// Address: 005ede70
// Address Range: [[005ede70, 005edf7f]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon *this_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon *this_ptr)

{
  CWeapon *pCVar1;
  CWeapon_ptr_344 pCVar2;
  CWeapon_ptr_776 pCVar3;
  
  pCVar1 = (CWeapon *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50(&ADJ(pCVar2)->physics_box);
  ADJ(pCVar3)->base.vtable._ub = &g_CWeaponVTable;
  ADJ(pCVar3)->weight = 5.0;
  ADJ(pCVar3)->fire_cooldown_timer = 0.0;
  ADJ(pCVar3)->weapon_state = 0;
  ADJ(pCVar3)->carried_by_actor = (CDemonActor *)0x0;
  ADJ(pCVar3)->ammo_count = 0x14;
  ADJ(pCVar3)->ammo_type = 0;
  ADJ(pCVar3)->base.collision_disabled = 1;
  ADJ(pCVar3)->is_spread_weapon = 0;
  ADJ(pCVar3)->fire_mode = 0;
  ADJ(pCVar3)->weapon_type = 0;
  ADJ(pCVar3)->can_penetrate = 0;
  ADJ(pCVar3)->bolt_velocity = 200.0;
  ADJ(pCVar3)->fire_cooldown = 0;
  ADJ(pCVar3)->can_attach_light = 1;
  (ADJ(pCVar3)->muzzle_flash_color).r = 0xff;
  (ADJ(pCVar3)->muzzle_flash_color).g = 0;
  (ADJ(pCVar3)->muzzle_flash_color).b = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar3)->model,"gat.kfm");
  ADJ(pCVar3)->sim_timer = 0.0;
  ADJ(pCVar3)->is_rendered = 0;
  return ADJ(pCVar3);
}
