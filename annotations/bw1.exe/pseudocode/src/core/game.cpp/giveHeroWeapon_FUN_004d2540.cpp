// Name: core_game.cpp_giveHeroWeapon_FUN_004d2540
// Address: 004d2540
// Address Range: [[004d2540, 004d25f4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeapon_FUN_004d2540(char *class_name)

#include "nocturne.h"

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004d2540(char *class_name)

{
  CDemonActor *actor;
  CDemonActor *pCVar1;
  
  actor = core_actor_cpp_createActorByName_FUN_0040c2b0(class_name);
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(g_CDemonMission_PTR_0061f650,actor);
  (*((actor->vtable)._ub)->setup)(actor);
  pCVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(actor,g_CWeaponClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\game.cpp";
    g_INT_01d1d404 = 0xbf9;
    core_main_c_displayErrorAndQuit_FUN_005030e0("giveHeroWeapon - This is not a weapon");
  }
  pCVar1[4].actor_name[8] = -0xc;
  pCVar1[4].actor_name[9] = '\x01';
  pCVar1[4].actor_name[10] = '\0';
  pCVar1[4].actor_name[0xb] = '\0';
  (*((actor->vtable)._ub)->pickup)(actor,(CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]);
  core_inv_cpp_CInventory_addItem_FUN_004f7690
            (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,actor,1);
  return;
}
