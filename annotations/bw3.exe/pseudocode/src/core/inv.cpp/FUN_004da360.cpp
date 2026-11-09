// Name: core_inv.cpp_FUN_004da360
// Address: 004da360
// Address Range: [[004da360, 004da419]]
// Convention: __cdecl
// Signature: CInventory * __cdecl core_inv_cpp_FUN_004da360(CInventory *this_ptr)

#include "nocturne.h"

CInventory * __cdecl core_inv_cpp_FUN_004da360(CInventory *this_ptr)

{
  *(uint *)(this_ptr + 0x334) = 0;
  *(uint *)(this_ptr + 0x338) = 0;
  *(uint *)(this_ptr + 0x33c) = 0;
  *(uint *)this_ptr = 0x42c80000;
  *(uint *)(this_ptr + 4) = 0;
  *(uint *)(this_ptr + 0x340) = 0;
  *(uint *)(this_ptr + 0x344) = 0;
  *(uint *)(this_ptr + 0x348) = 0;
  *(uint *)(this_ptr + 0x454) = 1;
  *(uint *)(this_ptr + 0x458) = 0;
  *(uint *)(this_ptr + 0x45c) = 0;
  *(uint *)(this_ptr + 0x460) = 0;
  *(uint *)(this_ptr + 0x34c) = 0;
  this_ptr[0x354] = (CInventory)0x0;
  *(uint *)(this_ptr + 0x464) = 0;
  *(uint *)(this_ptr + 0x468) = 0;
  *(uint *)(this_ptr + 0x46c) = 0;
  *(uint *)(this_ptr + 8) = 0;
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 0x10) = 0;
  return this_ptr;
}
