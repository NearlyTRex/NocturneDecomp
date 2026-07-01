// Name: core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930
// Address: 004dd930
// Address Range: [[004dd930, 004dd9c3]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930(char *class_name,EAmmoType ammo_type)

#include "nocturne.h"

void __cdecl core_game_cpp_giveHeroWeaponAmmo_FUN_004dd930(char *class_name,EAmmoType ammo_type)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x31c,"..\\core\\game.cpp",2588);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,&pCVar1->base);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = ammo_type;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(pCVar1,class_name);
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (&g_HeroActors[g_LocalHeroIndex]->inventory,&pCVar1->base,1);
    return;
  }
  return;
}
