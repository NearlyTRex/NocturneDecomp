// Name: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
// Address: 004ff3b0
// MANUAL RECONSTRUCTION
// Address Range: [[004ff3b0, 004ff3f7]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,_FILE *file_handle)

{
  char *pcVar1;
  int iVar3;
  CDemonActor *this_ptr_00;

  iVar3 = 0;
  if (0 < this_ptr->item_count) {
    do {
      this_ptr_00 = this_ptr->items[iVar3];
      pcVar1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr_00);
      iVar3 = iVar3 + 1;
      _fprintf(file_handle,"%s%s \"%s\"\n",g_PropertyNamePrefix,pcVar1,this_ptr_00->actor_name);
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
