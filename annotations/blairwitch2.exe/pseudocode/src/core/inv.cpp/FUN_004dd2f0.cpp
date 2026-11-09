// Name: core_inv.cpp_FUN_004dd2f0
// Address: 004dd2f0
// Address Range: [[004dd2f0, 004dd311]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dd2f0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004dd2f0(CInventory *this_ptr)

{
  if (*(int *)(this_ptr + 4) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  *(uint *)(this_ptr + 0x348) = 0x40a00000;
  return;
}
