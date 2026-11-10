// Name: core_inv.cpp_CInventory_loadItems_FUN_004dc810
// Address: 004dc810
// Address Range: [[004dc810, 004dc84f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004dc810(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004dc810(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      core_mission_cpp_FUN_004fc270(0x01D182F0,*(uint *)(pCVar2 + 0x14));
      pCVar2 = pCVar2 + 4;
    } while (iVar1 < *(int *)(this_ptr + 0x10));
  }
  *(uint *)(this_ptr + 0x460) = 0;
  return;
}
