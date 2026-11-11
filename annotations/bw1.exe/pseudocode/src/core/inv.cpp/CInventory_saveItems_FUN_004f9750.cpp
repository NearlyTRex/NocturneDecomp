// Name: core_inv.cpp_CInventory_saveItems_FUN_004f9750
// Address: 004f9750
// Address Range: [[004f9750, 004f9797]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004f9750(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004f9750(CInventory *this_ptr,_FILE *file_handle)

{
  char *pcVar1;
  CInventory *pCVar2;
  int iVar3;
  CDemonActor *this_ptr_00;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      this_ptr_00 = pCVar2->items[0];
      pcVar1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(this_ptr_00);
      iVar3 = iVar3 + 1;
      FUN_005c03c0(file_handle,"%s%s \"%s\"\n",&DAT_006106c0,pcVar1,this_ptr_00);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
