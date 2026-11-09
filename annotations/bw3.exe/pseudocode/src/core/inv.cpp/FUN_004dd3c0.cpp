// Name: core_inv.cpp_FUN_004dd3c0
// Address: 004dd3c0
// Address Range: [[004dd3c0, 004dd3e1]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dd3c0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004dd3c0(CInventory *this_ptr)

{
  if (*(int *)(this_ptr + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  *(uint *)(this_ptr + 0x348) = 0x40a00000;
  return;
}
