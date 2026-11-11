// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40
// Address: 004def40
// Address Range: [[004def40, 004def9b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004def40(CInventory *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004def40(CInventory *this_ptr,uint key_mask)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      while ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (pCVar2->items[0],g_CKeyActorClassInfo.name_hash), iVar1 == 0 ||
             ((*(uint *)(iVar1 + 0x430) & key_mask) == 0))) {
        iVar3 = iVar3 + 1;
        pCVar2 = (CInventory *)&pCVar2->owner;
        if (this_ptr->item_count <= iVar3) {
          return;
        }
      }
      core_inv_cpp_FUN_004db8e0(this_ptr,pCVar2->items[0],1);
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
