// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280
// Address: 004c3280
// Address Range: [[004c3280, 004c32db]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(CInventory *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(CInventory *this_ptr,uint key_mask)

{
  CDemonActor *pCVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      while ((pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                                 (pCVar2->items[0],g_CKeyActorActorType_01cc30a8.name_hash),
             pCVar1 == (CDemonActor *)0x0 || ((pCVar1[2].location.area_id & key_mask) == 0))) {
        iVar3 = iVar3 + 1;
        pCVar2 = (CInventory *)&pCVar2->owner;
        if (this_ptr->item_count <= iVar3) {
          return;
        }
      }
      core_inv_cpp_CInventory_removeItem_FUN_004c07b0(this_ptr,pCVar2->items[0],1);
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
