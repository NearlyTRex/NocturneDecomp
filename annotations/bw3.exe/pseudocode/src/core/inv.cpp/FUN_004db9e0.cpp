// Name: core_inv.cpp_FUN_004db9e0
// Address: 004db9e0
// Address Range: [[004db9e0, 004dba21]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_FUN_004db9e0(CInventory *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_FUN_004db9e0(CInventory *this_ptr,char *class_name)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar2->items[0],class_name);
      if (iVar1 != 0) {
        return (int)pCVar2->items[0];
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return 0;
}
