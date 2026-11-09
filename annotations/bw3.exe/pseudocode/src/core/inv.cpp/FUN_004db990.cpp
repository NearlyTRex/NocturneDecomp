// Name: core_inv.cpp_FUN_004db990
// Address: 004db990
// Address Range: [[004db990, 004db9d1]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_inv_cpp_FUN_004db990(CInventory *this_ptr,char *item_name)

#include "nocturne.h"

CDemonActor * __cdecl core_inv_cpp_FUN_004db990(CInventory *this_ptr,char *item_name)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = _stricmp(*(char **)(pCVar2 + 0x14),item_name);
      if (iVar1 == 0) {
        return *(CDemonActor **)(pCVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  return (CDemonActor *)0x0;
}
