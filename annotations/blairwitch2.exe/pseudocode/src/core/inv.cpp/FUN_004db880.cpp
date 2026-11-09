// Name: core_inv.cpp_FUN_004db880
// Address: 004db880
// Address Range: [[004db880, 004db8d1]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_FUN_004db880(CInventory *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_FUN_004db880(CInventory *this_ptr,char *class_name)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = core_actor_cpp_FUN_0040c840(*(CDemonActor **)(pCVar2 + 0x14),class_name);
      if ((iVar1 != 0) && (*(int *)(this_ptr + 0x468) == *(int *)(pCVar2 + 0x46c))) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  return 0;
}
