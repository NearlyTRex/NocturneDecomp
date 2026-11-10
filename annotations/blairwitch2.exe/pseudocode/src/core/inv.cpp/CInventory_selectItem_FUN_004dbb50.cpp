// Name: core_inv.cpp_CInventory_selectItem_FUN_004dbb50
// Address: 004dbb50
// Address Range: [[004dbb50, 004dbc53]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004dbb50(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004dbb50(CInventory *this_ptr,int direction)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  
  core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(this_ptr);
  if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc) == 0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                          (*(CDemonActor **)(pCVar3 + 0x14),"CWeapon");
        if ((iVar1 == 0) && (*(int *)(this_ptr + 0x468) == *(int *)(pCVar3 + 0x46c))) {
          *(uint *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc) =
               *(uint *)(pCVar3 + 0x14);
          return;
        }
        iVar4 = iVar4 + 1;
        pCVar3 = pCVar3 + 4;
      } while (iVar4 < *(int *)(this_ptr + 0x10));
    }
    return;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  iVar1 = iVar4;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = iVar4;
      if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc) == *(int *)(pCVar3 + 0x14))
      break;
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
      iVar1 = iVar4;
    } while (iVar4 < *(int *)(this_ptr + 0x10));
  }
  while( true ) {
    iVar4 = iVar4 + direction;
    if (iVar4 < *(int *)(this_ptr + 0x10)) {
      if (iVar4 < 0) {
        iVar4 = *(int *)(this_ptr + 0x10) + -1;
      }
    }
    else {
      iVar4 = 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840
                      (*(CDemonActor **)(this_ptr + iVar4 * 4 + 0x14),"CWeapon");
    if ((iVar2 == 0) && (*(int *)(this_ptr + 0x468) == *(int *)(this_ptr + iVar4 * 4 + 0x46c)))
    break;
    if (iVar4 == iVar1) {
      return;
    }
  }
  *(uint *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x5fc) =
       *(uint *)(this_ptr + iVar4 * 4 + 0x14);
  return;
}
