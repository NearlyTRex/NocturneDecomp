// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
// Address: 004fed10
// MANUAL RECONSTRUCTION
// Address Range: [[004fed10, 004fedfe]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction)

{
  CWeapon *this_ptr_02;
  CWeapon *this_ptr_01;
  char *str2;
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;

  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
  if (this_ptr->selected_weapon != (CWeapon *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)this_ptr->items[iVar2]) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    do {
      iVar2 = iVar2 + direction;
      if (iVar2 < this_ptr->item_count) {
        if (iVar2 < 0) {
          iVar2 = this_ptr->item_count + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      this_ptr_01 = (CWeapon *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->items[iVar2],g_CWeaponClassInfo.name_hash);
      if (this_ptr_01 != (CWeapon *)0x0) {
        str2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                         (&this_ptr->selected_weapon->base);
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)this_ptr_01)
        ;
        iVar1 = _strcmp(str1,str2);
        if (iVar1 == 0) {
          this_ptr_02 = this_ptr->selected_weapon;
          if (this_ptr_01 == this_ptr_02) {
            return;
          }
          if (this_ptr_02 != (CWeapon *)0x0) {
            (*((this_ptr_02->base).vtable._ub)->process)(&this_ptr_02->base,0.1);
          }
          this_ptr->selected_weapon = this_ptr_01;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr,999);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
