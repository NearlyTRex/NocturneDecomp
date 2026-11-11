// Name: core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0
// Address: 004f8dc0
// Address Range: [[004f8dc0, 004f8eba]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CWeapon *this_ptr_00;
  CWeapon *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  if (this_ptr->item_count < 1) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  else {
    iVar3 = 0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(this_ptr,1);
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar5->items[0]) break;
        iVar3 = iVar3 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar3 < this_ptr->item_count);
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + direction;
      if (iVar3 < this_ptr->item_count) {
        if (iVar3 < 0) {
          iVar3 = this_ptr->item_count + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      pCVar1 = (CWeapon *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (this_ptr->items[iVar3],g_CWeaponClassInfo.name_hash);
      if (((pCVar1 != (CWeapon *)0x0) &&
          (iVar2 = core_inv_cpp_FUN_004fa540(this_ptr,pCVar1,weapon_category), iVar2 != 0)) &&
         ((specific_weapon == (CDemonActor *)0x0 || (pCVar1 == (CWeapon *)specific_weapon)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    this_ptr_00 = this_ptr->selected_weapon;
    if (this_ptr_00 != pCVar1) {
      if (this_ptr_00 != (CWeapon *)0x0) {
        (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,0.1);
      }
      this_ptr->selected_weapon = pCVar1;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0(this_ptr,999);
      return;
    }
  }
  return;
}
