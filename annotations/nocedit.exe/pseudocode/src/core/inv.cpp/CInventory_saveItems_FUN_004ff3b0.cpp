// Name: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
// Address: 004ff3b0
// Address Range: [[004ff3b0, 004ff3f7]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_saveItems_FUN_004ff3b0(CInventory * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,FILE *file_handle)

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
      pcVar1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr_00);
      iVar3 = iVar3 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file_handle,"%s%s \"%s\"\n",g_PropertyNamePrefix,pcVar1,this_ptr_00);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}
