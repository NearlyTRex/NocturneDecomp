// Name: core_inv.cpp_FUN_004da440
// Address: 004da440
// Address Range: [[004da440, 004da4d9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004da440(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004da4a0) */

void __cdecl core_inv_cpp_FUN_004da440(CInventory *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr + 0x10);
  while (0 < iVar1) {
    core_inv_cpp_FUN_004dbaa0
              (this_ptr,*(CDemonActor **)(this_ptr + 0x14),(uint)(*(int *)(this_ptr + 0x458) == 0));
    iVar1 = *(int *)(this_ptr + 0x10);
  }
  *(uint *)(this_ptr + 0x33c) = 0;
  *(uint *)(this_ptr + 0x458) = 0;
  iVar1 = *(int *)(this_ptr + 0x464);
  *(uint *)(this_ptr + 0x338) = 0;
  if (iVar1 == 0) {
    *(uint *)(this_ptr + 0xc) = 0;
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  *(uint *)(this_ptr + 0x464) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  return;
}
