// Name: core_inv.cpp_CInventory_saveItems_FUN_004dc460
// Address: 004dc460
// Address Range: [[004dc460, 004dc4a7]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004dc460(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004dc460(CInventory *this_ptr,_FILE *file_handle)

{
  CInventory *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(pCVar1->items[0]);
      iVar2 = iVar2 + 1;
      _fprintf(file_handle,"%s%s \"%s\"\n");
      pCVar1 = (CInventory *)&pCVar1->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return;
}
