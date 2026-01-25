// Name: core_game.cpp_giveHeroWeapon_FUN_004dd870
// Address: 004dd870
// Address Range: [[004dd870, 004dd924]]
// Convention: __cdecl
// Signature: void core_game.cpp_giveHeroWeapon_FUN_004dd870(char * p1)

#include "nocturne.h"

/* Signature: byte core_game.cpp_giveHeroWeapon(uint sActorClassName) */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004dd870(char *p1)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  
  this_ptr = core_actor_cpp_createActorByName_FUN_0040c430(p1);
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  (*((this_ptr->vtable)._ub)->setup)(this_ptr);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CWeaponClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xa14;
    core_main_c_displayErrorAndQuit_FUN_00506f10("giveHeroWeapon - This is not a weapon");
  }
  pCVar1[4].actor_name[8] = -0xc;
  pCVar1[4].actor_name[9] = '\x01';
  pCVar1[4].actor_name[10] = '\0';
  pCVar1[4].actor_name[0xb] = '\0';
  (*((this_ptr->vtable)._ub)->pickup)(this_ptr,(CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
  core_inv_cpp_CInventory_addItem_FUN_004fd600
            (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr,1);
  return;
}
