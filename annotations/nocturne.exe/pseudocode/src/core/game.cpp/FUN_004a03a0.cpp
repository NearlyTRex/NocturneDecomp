// Name: core_game.cpp_FUN_004a03a0
// Address: 004a03a0
// Address Range: [[004a03a0, 004a0429]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004a03a0(char *param_1,EAmmoType param_2)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004a03a0(char *param_1,EAmmoType param_2)

{
  CAmmo *pCVar1;
  
  pCVar1 = operator_new(0x314);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720
              (g_CDemonMission_PTR_005baf90,&pCVar1->base);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = param_2;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar1,param_1);
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004bf360
              (&g_HeroActors[g_LocalHeroIndex]->inventory,&pCVar1->base,1);
    return;
  }
  return;
}
