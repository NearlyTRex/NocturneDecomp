// Name: core_inv.cpp_FUN_004f9ae0
// Address: 004f9ae0
// Address Range: [[004f9ae0, 004f9b1f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f9ae0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004f9ae0(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = iVar1 + 1;
      core_mission_cpp_FUN_0051b1d0(0x01D2C900,*(uint *)(pCVar2 + 0x14));
      pCVar2 = pCVar2 + 4;
    } while (iVar1 < *(int *)(this_ptr + 0x10));
  }
  *(uint *)(this_ptr + 0x458) = 0;
  return;
}
