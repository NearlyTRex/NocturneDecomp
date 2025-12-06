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
  CWeapon *this_ptr_00;
  CDemonActor *weapon_actor;
  int iVar1;
  char *pcVar2;
  int iVar3;
  CWeapon *unaff_ESI;
  CInventory *pCVar4;
  CDemonActor *in_stack_00000014;
  
  if (this_ptr->item_count < 1) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  else {
    pcVar2 = (char *)0x0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
    pCVar4 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        pcVar2 = pcVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while ((int)pcVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    while( true ) {
      pcVar2 = in_stack_00000014->actor_name + (int)pcVar2;
      if ((int)pcVar2 < this_ptr->item_count) {
        if ((int)pcVar2 < 0) {
          pcVar2 = (char *)(this_ptr->item_count + -1);
        }
      }
      else {
        pcVar2 = (char *)0x0;
      }
      weapon_actor = core_actor_cpp_castToClassHash_FUN_0040c790
                               (this_ptr->items[(int)pcVar2],g_CWeaponClassInfo.name_hash);
      if (((weapon_actor != (CDemonActor *)0x0) &&
          (iVar1 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                             (this_ptr,weapon_actor,(int)in_stack_00000014), iVar1 != 0)) &&
         ((in_stack_00000014 == (CDemonActor *)0x0 || (weapon_actor == in_stack_00000014)))) break;
      iVar3 = iVar3 + 1;
      if (99 < iVar3) {
        return;
      }
    }
    this_ptr_00 = this_ptr->selected_weapon;
    if (this_ptr_00 != unaff_ESI) {
      if (this_ptr_00 != (CWeapon *)0x0) {
        (*((this_ptr_00->base_actor).vtable)->process)(&this_ptr_00->base_actor);
      }
      this_ptr->selected_weapon = (CWeapon *)this_ptr;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
      return;
    }
  }
  return;
}
