// Name: core_inv.cpp_CInventory_hasItemOfClass_FUN_004fea20
// Address: 004fea20
// Address Range: [[004fea20, 004fea63]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20(CInventory *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20(CInventory *this_ptr,char *class_name)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],class_name);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return 0;
}
