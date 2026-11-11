// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
// Address: 004dbc60
// Address Range: [[004dbc60, 004dbd72]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60(CInventory *this_ptr,int direction)

{
  CWeapon *this_ptr_00;
  CWeapon *pCVar1;
  char *str2;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,1);
  if (this_ptr->selected_weapons[this_ptr->current_group] != (CWeapon *)0x0) {
    iVar3 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapons[this_ptr->current_group] == (CWeapon *)pCVar5->items[0])
        break;
        iVar3 = iVar3 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar3 < this_ptr->item_count);
    }
    iVar4 = 0;
    do {
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
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (this_ptr->items[iVar3],g_CWeaponClassInfo.name_hash);
      if (pCVar1 != (CWeapon *)0x0) {
        str2 = (char *)core_actor_cpp_FUN_00408a50
                                 (this_ptr->selected_weapons[this_ptr->current_group]);
        str1 = (char *)core_actor_cpp_FUN_00408a50(pCVar1);
        iVar2 = _strcmp(str1,str2);
        if (iVar2 == 0) {
          this_ptr_00 = this_ptr->selected_weapons[this_ptr->current_group];
          if (pCVar1 == this_ptr_00) {
            return;
          }
          if (this_ptr_00 != (CWeapon *)0x0) {
            (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,0.1);
          }
          this_ptr->selected_weapons[this_ptr->current_group] = pCVar1;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(this_ptr,999);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 100);
  }
  return;
}
