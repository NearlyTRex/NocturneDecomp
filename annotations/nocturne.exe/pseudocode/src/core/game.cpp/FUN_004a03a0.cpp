// Name: core_game.cpp_FUN_004a03a0
// Address: 004a03a0
// Address Range: [[004a03a0, 004a0429]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004a03a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_game_cpp_FUN_004a03a0(void)

{
  CAmmo *pCVar1;
  char *in_stack_00000004;
  EAmmoType in_stack_00000008;
  
  pCVar1 = (CAmmo *)FUN_0056497c(0x314);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,&pCVar1->base);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = in_stack_00000008;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(pCVar1,in_stack_00000004);
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004bf360
              ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),&pCVar1->base,1);
    return;
  }
  return;
}
