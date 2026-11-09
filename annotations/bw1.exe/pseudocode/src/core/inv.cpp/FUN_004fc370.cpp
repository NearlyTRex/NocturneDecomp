// Name: core_inv.cpp_FUN_004fc370
// Address: 004fc370
// Address Range: [[004fc370, 004fc3d3]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004fc370(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004fc370(CInventory *this_ptr)

{
  if (*(int *)(this_ptr + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    *(uint *)(this_ptr + 0x454) = (uint)(*(int *)(this_ptr + 0x454) == 0);
    if (0.0 < *(float *)(this_ptr + 0x344)) {
      core_inv_cpp_FUN_004fa710(this_ptr);
    }
    if (0.0 < *(float *)(this_ptr + 0x340)) {
      core_inv_cpp_FUN_004fa6c0(this_ptr,0);
      return;
    }
  }
  return;
}
