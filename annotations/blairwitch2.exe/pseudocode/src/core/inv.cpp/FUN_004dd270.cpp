// Name: core_inv.cpp_FUN_004dd270
// Address: 004dd270
// Address Range: [[004dd270, 004dd2b0]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dd270(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004dd270(CInventory *this_ptr,int reset_both)

{
  if (*(int *)(this_ptr + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    *(uint *)(this_ptr + 0x344) = 0;
    *(uint *)(this_ptr + 0x340) = 0x40a00000;
    if (reset_both != 0) {
      *(uint *)(this_ptr + 0x350) = 0x40a00000;
      return;
    }
  }
  return;
}
