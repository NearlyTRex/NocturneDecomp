// Name: core_inv.cpp_CInventory_removeItem_FUN_004dbaa0
// Address: 004dbaa0
// Address Range: [[004dbaa0, 004dbb36]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  if (item_to_remove == *(CDemonActor **)(this_ptr + 0x338)) {
    *(uint *)(this_ptr + 0x338) = 0;
  }
  if (item_to_remove == *(CDemonActor **)(this_ptr + 0x33c)) {
    *(uint *)(this_ptr + 0x33c) = 0;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      pCVar1 = *(CDemonActor **)(pCVar4 + 0x14);
      if (item_to_remove == pCVar1) {
        iVar2 = *(int *)(this_ptr + 0x10);
        *(int *)(this_ptr + 0x10) = iVar2 + -1;
        memmove
                  (this_ptr + iVar3 * 4 + 0x14,this_ptr + iVar3 * 4 + 0x18,
                   ((iVar2 + -1) - iVar3) * 4);
        if (should_delete_actor == 0) {
          return;
        }
        core_actor_cpp_FUN_004085a0(pCVar1);
        return;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  return;
}
