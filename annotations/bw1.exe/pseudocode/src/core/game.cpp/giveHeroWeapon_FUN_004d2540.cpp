// Name: core_game.cpp_giveHeroWeapon_FUN_004d2540
// Address: 004d2540
// Address Range: [[004d2540, 004d25f4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeapon_FUN_004d2540(char *class_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004d2540(char *class_name)

{
  CDemonActor *actor;
  int iVar1;
  
  actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(class_name);
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,actor);
  (*((actor->vtable)._ub)->setup)(actor);
  iVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(actor,g_CWeaponClassInfo.name_hash);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\game.cpp";
    _DAT_01d1d404 = 0xbf9;
    core_main_c_FUN_005030e0("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar1 + 0x568) = 500;
  (*((actor->vtable)._ub)->pickup)(actor,*(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
  core_inv_cpp_FUN_004f7690
            ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),actor,1);
  return;
}
