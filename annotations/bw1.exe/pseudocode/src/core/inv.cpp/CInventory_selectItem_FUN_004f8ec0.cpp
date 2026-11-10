// Name: core_inv.cpp_CInventory_selectItem_FUN_004f8ec0
// Address: 004f8ec0
// Address Range: [[004f8ec0, 004f8fdb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004f8ec0(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004f8ec0(CInventory *this_ptr,int direction)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    if (*(int *)(this_ptr + 0x33c) != 0) {
      iVar4 = 0;
      pCVar3 = this_ptr;
      if (0 < *(int *)(this_ptr + 0x10)) {
        do {
          if (*(int *)(this_ptr + 0x33c) == *(int *)(pCVar3 + 0x14)) break;
          iVar4 = iVar4 + 1;
          pCVar3 = pCVar3 + 4;
        } while (iVar4 < *(int *)(this_ptr + 0x10));
      }
      if ((*(uint *)(this_ptr + 0x344) & 0x7fffffff) == 0) {
        core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(this_ptr);
        return;
      }
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(this_ptr);
      iVar1 = iVar4;
      while( true ) {
        iVar1 = iVar1 + direction;
        if (iVar1 < *(int *)(this_ptr + 0x10)) {
          if (iVar1 < 0) {
            iVar1 = *(int *)(this_ptr + 0x10) + -1;
          }
        }
        else {
          iVar1 = 0;
        }
        iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                          (*(CDemonActor **)(this_ptr + iVar1 * 4 + 0x14),"CWeapon");
        if ((iVar2 == 0) &&
           (iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                              (*(CDemonActor **)(this_ptr + iVar1 * 4 + 0x14),"CAmmo"),
           iVar2 == 0)) break;
        if (iVar1 == iVar4) {
          return;
        }
      }
      *(uint *)(this_ptr + 0x33c) = *(uint *)(this_ptr + iVar1 * 4 + 0x14);
      return;
    }
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c550
                          (*(CDemonActor **)(pCVar3 + 0x14),"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550
                              (*(CDemonActor **)(pCVar3 + 0x14),"CAmmo"), iVar1 == 0)) {
          *(uint *)(this_ptr + 0x33c) = *(uint *)(pCVar3 + 0x14);
          return;
        }
        iVar4 = iVar4 + 1;
        pCVar3 = pCVar3 + 4;
      } while (iVar4 < *(int *)(this_ptr + 0x10));
    }
  }
  return;
}
