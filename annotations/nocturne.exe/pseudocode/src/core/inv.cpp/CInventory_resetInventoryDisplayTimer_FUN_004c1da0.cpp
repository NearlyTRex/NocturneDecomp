// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
// Address: 004c1da0
// Address Range: [[004c1da0, 004c1dc1]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(int param_1)

{
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  *(uint *)(param_1 + 0x340) = 0x40a00000;
  return;
}
