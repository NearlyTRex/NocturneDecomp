// Name: core_inv.cpp_FUN_004db9d0
// Address: 004db9d0
// Address Range: [[004db9d0, 004dbb4b]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004db9d0(CInventory *param_1,CWeapon *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void core_inv_cpp_FUN_004db9d0(CInventory *param_1,CWeapon *param_2,uint param_3,int param_4)

{
  CWeapon *this_ptr;
  CWeapon *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  if (param_1->item_count < 1) {
    param_1->selected_weapons[param_1->current_group] = (CWeapon *)0x0;
  }
  else {
    iVar3 = 0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(param_1,1);
    if (0 < param_1->item_count) {
      pCVar5 = param_1;
      do {
        if (param_1->selected_weapons[param_1->current_group] == (CWeapon *)pCVar5->items[0]) break;
        iVar3 = iVar3 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar3 < param_1->item_count);
    }
    if ((param_1->selected_weapons[param_1->current_group] != (CWeapon *)0x0) &&
       (param_1->item_groups[iVar3] != param_1->current_group)) {
      param_1->selected_weapons[param_1->current_group] = (CWeapon *)0x0;
    }
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + param_4;
      if (iVar3 < param_1->item_count) {
        if (iVar3 < 0) {
          iVar3 = param_1->item_count + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      pCVar1 = (CWeapon *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (param_1->items[iVar3],g_CWeaponClassInfo.name_hash);
      if ((((param_1->current_group == param_1->item_groups[iVar3]) && (pCVar1 != (CWeapon *)0x0))
          && (iVar2 = core_inv_cpp_FUN_004dd0a0(param_1,pCVar1,param_3), iVar2 != 0)) &&
         ((param_2 == (CWeapon *)0x0 || (pCVar1 == param_2)))) break;
      iVar4 = iVar4 + 1;
      if (99 < iVar4) {
        return;
      }
    }
    this_ptr = param_1->selected_weapons[param_1->current_group];
    if (this_ptr != pCVar1) {
      if (this_ptr != (CWeapon *)0x0) {
        (*((this_ptr->base).vtable._ub)->process)(&this_ptr->base,0.1);
      }
      param_1->selected_weapons[param_1->current_group] = pCVar1;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(param_1,999);
      return;
    }
  }
  return;
}
