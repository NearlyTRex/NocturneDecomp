// Name: core_inv.cpp_FUN_004dd2c0
// Address: 004dd2c0
// Address Range: [[004dd2c0, 004dd2eb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dd2c0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004dd2c0(CInventory *this_ptr)

{
  if (*(int *)(this_ptr + 4) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  *(uint *)(this_ptr + 0x340) = 0;
  *(uint *)(this_ptr + 0x344) = 0x40a00000;
  return;
}
