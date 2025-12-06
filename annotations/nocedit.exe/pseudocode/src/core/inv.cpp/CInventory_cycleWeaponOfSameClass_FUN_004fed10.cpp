// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
// Address: 004fed10
// Address Range: [[004fed10, 004fedfe]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory * this_ptr, int direction)

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction)

{
  CWeapon *this_ptr_00;
  CWeapon *this_ptr_01;
  char *str1;
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_ESI;
  CInventory *pCVar4;
  CWeapon *in_stack_0000000c;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
  if (this_ptr->selected_weapon != (CWeapon *)0x0) {
    pcVar2 = (char *)0x0;
    pCVar4 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        pcVar2 = pcVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while ((int)pcVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    do {
      pcVar2 = (in_stack_0000000c->base_actor).actor_name + (int)pcVar2;
      if ((int)pcVar2 < this_ptr->item_count) {
        if ((int)pcVar2 < 0) {
          pcVar2 = (char *)(this_ptr->item_count + -1);
        }
      }
      else {
        pcVar2 = (char *)0x0;
      }
      this_ptr_01 = (CWeapon *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->items[(int)pcVar2],g_CWeaponClassInfo.name_hash);
      if (this_ptr_01 != (CWeapon *)0x0) {
        core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                  (&this_ptr->selected_weapon->base_actor);
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)this_ptr_01)
        ;
        iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,unaff_ESI);
        if (iVar1 == 0) {
          this_ptr_00 = this_ptr->selected_weapon;
          if (this_ptr_01 == this_ptr_00) {
            return;
          }
          if (this_ptr_00 != (CWeapon *)0x0) {
            (*((this_ptr_00->base_actor).vtable)->process)(&this_ptr_00->base_actor);
          }
          this_ptr->selected_weapon = in_stack_0000000c;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
