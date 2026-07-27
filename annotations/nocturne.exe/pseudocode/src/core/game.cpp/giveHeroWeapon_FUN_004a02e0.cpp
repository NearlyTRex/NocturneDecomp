// Name: core_game.cpp_giveHeroWeapon_FUN_004a02e0
// Address: 004a02e0
// Address Range: [[004a02e0, 004a0394]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_giveHeroWeapon_FUN_004a02e0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_createActorByName_FUN_0040d540(param_1);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar1);
  (*(code *)**(uint **)(iVar1 + 0x14c))(iVar1);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar1,g_CWeaponActorType_02ddf970.name_hash);
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\core\\game.cpp";
    INT_01cc4804 = 0xa0b;
    core_main_c_FUN_004c8440("giveHeroWeapon - This is not a weapon");
  }
  *(uint *)(iVar2 + 0x560) = 500;
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0x80))
            (iVar1,*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8));
  core_inv_cpp_CInventory_addItem_FUN_004bf360
            (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,iVar1,1);
  return;
}
