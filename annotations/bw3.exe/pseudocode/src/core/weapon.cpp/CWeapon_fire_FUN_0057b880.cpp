// Name: core_weapon.cpp_CWeapon_fire_FUN_0057b880
// Address: 0057b880
// Address Range: [[0057b880, 0057b92e]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0057b880(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0057b880(CWeapon *this_ptr)

{
  CGame *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  
  if (this_ptr->infinite_ammo == 0) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
    this_ptr_00 = g_CGamePtr;
    if (pCVar1 != (CDemonActor *)0x0) {
      if (this_ptr->ammo_type == AMMO_TYPE_MANA) {
        iVar2 = *(int *)(pCVar1[0x185].create_event + 0x50);
      }
      else {
        iVar2 = *(int *)(pCVar1[0x185].create_event + 0x54);
      }
      if (iVar2 < this_ptr->ammo_per_shot) {
        if (this_ptr->ammo_type == AMMO_TYPE_MANA) {
          core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(g_CGamePtr);
        }
        return 0;
      }
      iVar2 = iVar2 - this_ptr->ammo_per_shot;
      if (this_ptr->ammo_type == AMMO_TYPE_MANA) {
        *(int *)(pCVar1[0x185].create_event + 0x50) = iVar2;
        core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(this_ptr_00);
        return 1;
      }
      *(int *)(pCVar1[0x185].create_event + 0x54) = iVar2;
      return 1;
    }
  }
  return 1;
}
