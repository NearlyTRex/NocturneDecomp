// Name: core_game.cpp_giveHeroWeaponAmmo_FUN_004d25fe
// Address: 004d25fe
// Address Range: [[004d25fe, 004d2689]]
// Convention: unknown
// Signature: void core_game_cpp_giveHeroWeaponAmmo_FUN_004d25fe(char *param_1,EAmmoType param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_giveHeroWeaponAmmo_FUN_004d25fe(char *param_1,EAmmoType param_2)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)debugAllocTracked1(0x31c);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,&pCVar1->base);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = param_2;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCVar1,param_1);
    pCVar1->ammo_count = 500;
    core_inv_cpp_FUN_004f7690
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),&pCVar1->base,1);
    return;
  }
  return;
}
