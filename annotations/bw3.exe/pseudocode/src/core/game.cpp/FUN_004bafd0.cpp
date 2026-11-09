// Name: core_game.cpp_FUN_004bafd0
// Address: 004bafd0
// Address Range: [[004bafd0, 004bb084]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bafd0(char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bafd0(char *class_name)

{
  CDemonActor *actor;
  int iVar1;
  
  actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(class_name);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
  (*(code *)**(uint **)&actor->field_0x154)(actor);
  iVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(actor,g_CWeaponClassInfo.name_hash);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0xc18;
    core_main_c_FUN_004e4330("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar1 + 0x568) = 500;
  (**(code **)(*(int *)&actor->field_0x154 + 0x88))
            (actor,*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
  core_inv_cpp_FUN_004da880
            ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),actor,1);
  return;
}
