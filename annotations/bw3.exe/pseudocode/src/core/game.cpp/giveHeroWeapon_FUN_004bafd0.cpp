// Name: core_game.cpp_giveHeroWeapon_FUN_004bafd0
// Address: 004bafd0
// Address Range: [[004bafd0, 004bb084]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeapon_FUN_004bafd0(char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004bafd0(char *class_name)

{
  CDemonActor *actor;
  CDemonActor *pCVar1;
  
  actor = core_actor_cpp_createActorByName_FUN_0040c4f0(class_name);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
  (*((actor->vtable)._ub)->setup)(actor);
  pCVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(actor,g_CWeaponClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0xc18;
    core_main_c_FUN_004e4330("giveHeroWeapon - This is not a weapon");
  }
  pCVar1[4].actor_name[8] = -0xc;
  pCVar1[4].actor_name[9] = '\x01';
  pCVar1[4].actor_name[10] = '\0';
  pCVar1[4].actor_name[0xb] = '\0';
  (*((actor->vtable)._ub)->pickup)(actor,*(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
  core_inv_cpp_FUN_004da880
            ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),actor,1);
  return;
}
