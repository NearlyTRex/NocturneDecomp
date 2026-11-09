// Name: core_inv.cpp_CInventory_clear_FUN_004f6fa0
// Address: 004f6fa0
// Address Range: [[004f6fa0, 004f7042]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004f6fa0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_clear_FUN_004f6fa0(CInventory *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr + 0x10);
  while (0 < iVar1) {
    core_inv_cpp_FUN_004f8d00
              (this_ptr,*(CDemonActor **)(this_ptr + 0x14),(uint)(*(int *)(this_ptr + 0x458) == 0));
    iVar1 = *(int *)(this_ptr + 0x10);
  }
  *(uint *)(this_ptr + 0x33c) = 0;
  *(uint *)(this_ptr + 0x458) = 0;
  iVar1 = *(int *)(this_ptr + 0x464);
  *(uint *)(this_ptr + 0x338) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
    *(uint *)(this_ptr + 0x464) = 0;
  }
  *(uint *)(this_ptr + 0x460) = 0;
  *(uint *)(this_ptr + 8) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 0x45c) = 0;
  return;
}
