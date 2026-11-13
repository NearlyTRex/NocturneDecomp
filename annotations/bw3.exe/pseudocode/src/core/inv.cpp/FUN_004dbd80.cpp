// Name: core_inv.cpp_FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dbe6e]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dbd80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_inv_cpp_FUN_004dbd80(void)

{
  CWeapon *this_ptr;
  CWeapon *this_ptr_00;
  char *str2;
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  CInventory *in_stack_00000004;
  int in_stack_00000008;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(in_stack_00000004,1);
  if (in_stack_00000004->selected_weapon != (CWeapon *)0x0) {
    iVar2 = 0;
    pCVar4 = in_stack_00000004;
    if (0 < in_stack_00000004->item_count) {
      do {
        if (in_stack_00000004->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        iVar2 = iVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while (iVar2 < in_stack_00000004->item_count);
    }
    iVar3 = 0;
    do {
      iVar2 = iVar2 + in_stack_00000008;
      if (iVar2 < in_stack_00000004->item_count) {
        if (iVar2 < 0) {
          iVar2 = in_stack_00000004->item_count + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      this_ptr_00 = (CWeapon *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (in_stack_00000004->items[iVar2],g_CWeaponClassInfo.name_hash);
      if (this_ptr_00 != (CWeapon *)0x0) {
        str2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870
                         (&in_stack_00000004->selected_weapon->base);
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870((CDemonActor *)this_ptr_00)
        ;
        iVar1 = _strcmp(str1,str2);
        if (iVar1 == 0) {
          this_ptr = in_stack_00000004->selected_weapon;
          if (this_ptr_00 == this_ptr) {
            return;
          }
          if (this_ptr != (CWeapon *)0x0) {
            (*((this_ptr->base).vtable._ub)->process)(&this_ptr->base,0.1);
          }
          in_stack_00000004->selected_weapon = this_ptr_00;
          core_inv_cpp_FUN_004dd2d0();
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
