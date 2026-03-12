// Name: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
// Address: 004feb10
// Address Range: [[004feb10, 004fec0a]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CWeapon *this_ptr_01;
  CWeapon *weapon_actor;
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  CWeapon *this_ptr_00;
  
  if (this_ptr->item_count < 1) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  else {
    iVar2 = 0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
    pCVar4 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        iVar2 = iVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while (iVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    while( true ) {
      iVar2 = iVar2 + direction;
      if (iVar2 < this_ptr->item_count) {
        if (iVar2 < 0) {
          iVar2 = this_ptr->item_count + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      weapon_actor = (CWeapon *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (this_ptr->items[iVar2],g_CWeaponClassInfo.name_hash);
      if (((weapon_actor != (CWeapon *)0x0) &&
          (iVar1 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                             (this_ptr,(CDemonActor *)weapon_actor,weapon_category), iVar1 != 0)) &&
         ((specific_weapon == (CDemonActor *)0x0 || (weapon_actor == (CWeapon *)specific_weapon))))
      break;
      iVar3 = iVar3 + 1;
      if (99 < iVar3) {
        return;
      }
    }
    this_ptr_01 = this_ptr->selected_weapon;
    if (this_ptr_01 != weapon_actor) {
      if (this_ptr_01 != (CWeapon *)0x0) {
        (*((this_ptr_01->base).vtable._ub)->process)(&this_ptr_01->base,0.1);
      }
      this_ptr->selected_weapon = weapon_actor;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
      return;
    }
  }
  return;
}
