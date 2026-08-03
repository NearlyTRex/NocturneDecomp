// Name: core_game.cpp_giveHeroWeapon_FUN_004a02e0
// Address: 004a02e0
// Address Range: [[004a02e0, 004a0394]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(char *class_name)

{
  CDemonActor *actor;
  CDemonActor *pCVar1;
  
  actor = core_actor_cpp_createActorByName_FUN_0040d540(class_name);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(g_CDemonMission_PTR_005baf90,actor);
  (*((actor->vtable)._ub)->setup)(actor);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(actor,g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\game.cpp";
    g_INT_01cc4804 = 0xa0b;
    core_main_c_FUN_004c8440("giveHeroWeapon - This is not a weapon");
  }
  pCVar1[4].location.position.x = 7.00649e-43;
  (*((actor->vtable)._ub)->pickup)(actor,*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8));
  core_inv_cpp_CInventory_addItem_FUN_004bf360
            ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),actor,1);
  return;
}
