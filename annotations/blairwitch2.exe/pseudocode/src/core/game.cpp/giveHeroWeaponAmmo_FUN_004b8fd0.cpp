// Name: core_game.cpp_giveHeroWeaponAmmo_FUN_004b8fd0
// Address: 004b8fd0
// Address Range: [[004b8fd0, 004b905c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeaponAmmo_FUN_004b8fd0(char *class_name,EAmmoType ammo_type)

#include "nocturne.h"

void __cdecl core_game_cpp_giveHeroWeaponAmmo_FUN_004b8fd0(char *class_name,EAmmoType ammo_type)

{
  CAmmo *pCVar1;
  
  pCVar1 = operator_new(0x47c);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
              (g_CDemonMission_PTR_00618170,&pCVar1->base);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = ammo_type;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(pCVar1,class_name);
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004dadb0
              (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,&pCVar1->base,1,0);
    return;
  }
  return;
}
