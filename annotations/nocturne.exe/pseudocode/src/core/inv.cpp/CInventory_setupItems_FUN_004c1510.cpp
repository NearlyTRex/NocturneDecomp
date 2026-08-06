// Name: core_inv.cpp_CInventory_setupItems_FUN_004c1510
// Address: 004c1510
// Address Range: [[004c1510, 004c1579]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004c1510(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004c1510(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  if (this_ptr->preserve_items != 0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 1390;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CInventory::setupItems - we should own the items at this point!");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar1 + 1;
      (*((pCVar2->items[0]->vtable)._ub)->setup)(pCVar2->items[0]);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  return;
}
