// Name: core_weapon.cpp_CWeapon_fire_FUN_0057b880
// Address: 0057b880
// Address Range: [[0057b880, 0057b92e]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0057b880(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0057b880(CWeapon *this_ptr)

{
  CGame *this_ptr_00;
  int iVar1;
  int iVar2;
  
  if (*(int *)&this_ptr->field_0x570 == 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
    this_ptr_00 = g_CGamePtr;
    if (iVar1 != 0) {
      if (*(int *)&this_ptr->field_0x56c == 10) {
        iVar2 = *(int *)(iVar1 + 0x20b80);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x20b84);
      }
      if (iVar2 < *(int *)&this_ptr->field_0x58c) {
        if (*(int *)&this_ptr->field_0x56c == 10) {
          core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(g_CGamePtr);
        }
        return 0;
      }
      iVar2 = iVar2 - *(int *)&this_ptr->field_0x58c;
      if (*(int *)&this_ptr->field_0x56c == 10) {
        *(int *)(iVar1 + 0x20b80) = iVar2;
        core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(this_ptr_00);
        return 1;
      }
      *(int *)(iVar1 + 0x20b84) = iVar2;
      return 1;
    }
  }
  return 1;
}
