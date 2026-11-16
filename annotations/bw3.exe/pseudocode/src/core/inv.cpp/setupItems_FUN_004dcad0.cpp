// Name: core_inv.cpp_setupItems_FUN_004dcad0
// Address: 004dcad0
// Address Range: [[004dcad0, 004dcb39]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_setupItems_FUN_004dcad0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_setupItems_FUN_004dcad0(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  if (this_ptr->preserve_items != 0) {
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0x75c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CInventory::setupItems - we should own the items at this point!");
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
