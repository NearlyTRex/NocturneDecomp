// Name: core_game.cpp_FUN_004dd930
// Address: 004dd930
// Address Range: [[004dd930, 004dd9c3]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004dd930(char *p1,int p2)

#include "nocturne.h"

/* Signature: byte core_game.cpp_FUN_004dd930() */

void __cdecl core_game_cpp_FUN_004dd930(char *p1,int p2)

{
  CAmmo *pCVar1;
  EAmmoType in_stack_0000000c;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\game.cpp",0xa1c);
  if (pCVar1 == (CAmmo *)0x0) {
    return;
  }
  pCVar1 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(pCVar1);
  if (pCVar1 != (CAmmo *)0x0) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
    (*((pCVar1->base).vtable._ub)->setup)(&pCVar1->base);
    pCVar1->ammo_type = in_stack_0000000c;
    core_ammo_cpp_CAmmo_FUN_00410fd0();
    pCVar1->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (&g_HeroActors[g_LocalHeroIndex]->inventory,&pCVar1->base,1);
    return;
  }
  return;
}
