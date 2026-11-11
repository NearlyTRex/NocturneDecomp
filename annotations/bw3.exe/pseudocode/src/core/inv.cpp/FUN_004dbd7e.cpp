// Name: core_inv.cpp_FUN_004dbd7e
// Address: 004dbd7e
// Address Range: [[004dbd7e, 004dbe6e]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

#include "nocturne.h"

void core_inv_cpp_FUN_004dbd7e(CInventory *param_1,int param_2)

{
  CWeapon *this_ptr;
  CWeapon *this_ptr_00;
  char *str2;
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(param_1,1);
  if (param_1->selected_weapon != (CWeapon *)0x0) {
    iVar2 = 0;
    pCVar4 = param_1;
    if (0 < param_1->item_count) {
      do {
        if (param_1->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        iVar2 = iVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while (iVar2 < param_1->item_count);
    }
    iVar3 = 0;
    do {
      iVar2 = iVar2 + param_2;
      if (iVar2 < param_1->item_count) {
        if (iVar2 < 0) {
          iVar2 = param_1->item_count + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      this_ptr_00 = (CWeapon *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (param_1->items[iVar2],g_CWeaponClassInfo.name_hash);
      if (this_ptr_00 != (CWeapon *)0x0) {
        str2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870
                         (&param_1->selected_weapon->base);
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870((CDemonActor *)this_ptr_00)
        ;
        iVar1 = _strcmp(str1,str2);
        if (iVar1 == 0) {
          this_ptr = param_1->selected_weapon;
          if (this_ptr_00 == this_ptr) {
            return;
          }
          if (this_ptr != (CWeapon *)0x0) {
            (*((this_ptr->base).vtable._ub)->process)(&this_ptr->base,0.1);
          }
          param_1->selected_weapon = this_ptr_00;
          core_inv_cpp_FUN_004dd2d0(param_1,999);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
