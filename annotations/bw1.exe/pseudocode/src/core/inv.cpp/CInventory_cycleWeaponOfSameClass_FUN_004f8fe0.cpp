// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0
// Address: 004f8fe0
// Address Range: [[004f8fe0, 004f90ce]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004f8fe0(CInventory *this_ptr,int direction)

{
  CDemonActor *this_ptr_00;
  CDemonActor *this_ptr_01;
  char *str2;
  char *str1;
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(this_ptr,1);
  if (*(int *)(this_ptr + 0x338) != 0) {
    iVar2 = 0;
    pCVar4 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        if (*(int *)(this_ptr + 0x338) == *(int *)(pCVar4 + 0x14)) break;
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar2 < *(int *)(this_ptr + 0x10));
    }
    iVar3 = 0;
    do {
      iVar2 = iVar2 + direction;
      if (iVar2 < *(int *)(this_ptr + 0x10)) {
        if (iVar2 < 0) {
          iVar2 = *(int *)(this_ptr + 0x10) + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      this_ptr_01 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)(this_ptr + iVar2 * 4 + 0x14),
                               g_CWeaponClassInfo.name_hash);
      if (this_ptr_01 != (CDemonActor *)0x0) {
        str2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830
                         (*(CDemonActor **)(this_ptr + 0x338));
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(this_ptr_01);
        iVar1 = _strcmp(str1,str2);
        if (iVar1 == 0) {
          this_ptr_00 = *(CDemonActor **)(this_ptr + 0x338);
          if (this_ptr_01 == this_ptr_00) {
            return;
          }
          if (this_ptr_00 != (CDemonActor *)0x0) {
            (*((this_ptr_00->vtable)._ub)->process)(this_ptr_00,0.1);
          }
          *(CDemonActor **)(this_ptr + 0x338) = this_ptr_01;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0(this_ptr,999);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}
