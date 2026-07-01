// Name: core_inv.cpp_CInventory_setupItems_FUN_004ff780
// Address: 004ff780
// Address Range: [[004ff780, 004ff7f9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004ff780(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004ff780(CInventory *this_ptr)

{
  CInventory *pCVar1;
  int iVar2;
  
  if (this_ptr->preserve_items != 0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 1390;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::setupItems - we should own the items at this point!");
  }
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (pCVar1->items[0],"..\\core\\inv.cpp",1395);
      iVar2 = iVar2 + 1;
      (*((pCVar1->items[0]->vtable)._ub)->setup)(pCVar1->items[0]);
      pCVar1 = (CInventory *)&pCVar1->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return;
}
