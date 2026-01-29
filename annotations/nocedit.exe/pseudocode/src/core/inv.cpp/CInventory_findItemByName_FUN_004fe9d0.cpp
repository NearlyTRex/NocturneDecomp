// Name: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
// Address: 004fe9d0
// Address Range: [[004fe9d0, 004fea11]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)

#include "nocturne.h"

CDemonActor * __cdecl
core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = stricmp(pCVar2->items[0]->actor_name,item_name);
      if (iVar1 == 0) {
        return pCVar2->items[0];
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return (CDemonActor *)0x0;
}
