// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
// Address: 005014a0
// MANUAL RECONSTRUCTION
// Address Range: [[005014a0, 005014fb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory *this_ptr,uint key_mask)

{
  CKeyActor *pCVar1;
  int iVar3;

  iVar3 = 0;
  if (0 < this_ptr->item_count) {
    do {
      while ((pCVar1 = (CKeyActor *)
                       core_actor_cpp_castToClassHash_FUN_0040c790
                                 (this_ptr->items[iVar3],g_CKeyActorClassInfo.name_hash),
             pCVar1 == (CKeyActor *)0x0 || ((pCVar1->key_mask & key_mask) == 0))) {
        iVar3 = iVar3 + 1;
        if (this_ptr->item_count <= iVar3) {
          return;
        }
      }
      core_inv_cpp_CInventory_removeItem_FUN_004fea70(this_ptr,this_ptr->items[iVar3],1);
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
