// Name: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
// Address: 004feb10
// Address Range: [[004feb10, 004fec0a]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
          (CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CWeapon *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CWeapon *unaff_EDI;
  CInventory *pCVar5;
  CWeapon *pCVar6;
  
  if (this_ptr->item_count < 1) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  else {
    iVar3 = 0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
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
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (this_ptr->items[iVar3],g_CWeaponClassInfo.name_hash);
      if (((pCVar1 != (CWeapon *)0x0) &&
          (pCVar6 = pCVar1,
          iVar2 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                            (this_ptr,(CDemonActor *)pCVar1,weapon_category), iVar2 != 0)) &&
         ((specific_weapon == (CDemonActor *)0x0 || (pCVar1 == (CWeapon *)specific_weapon)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    pCVar1 = this_ptr->selected_weapon;
    if (pCVar1 != pCVar6) {
      if (pCVar1 != (CWeapon *)0x0) {
        (*((pCVar1->base).vtable._ub)->process)(&pCVar1->base,0.1);
      }
      this_ptr->selected_weapon = unaff_EDI;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
      return;
    }
  }
  return;
}
