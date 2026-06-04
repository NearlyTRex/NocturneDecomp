// Name: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
// Address: 004fe9d0
// MANUAL RECONSTRUCTION
// Address Range: [[004fe9d0, 004fea11]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)

#include "nocturne.h"

CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)

{
  int iVar1;
  int iVar3;

  iVar3 = 0;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = _stricmp(this_ptr->items[iVar3]->actor_name,item_name);
      if (iVar1 == 0) {
        return this_ptr->items[iVar3];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->item_count);
  }
  return (CDemonActor *)0x0;
}
