// Name: core_stairs.cpp_factoryFuncStairs_FUN_00568380
// Address: 00568380
// Address Range: [[00568380, 0056839b]]
// Convention: unknown
// Signature: void core_stairs_cpp_factoryFuncStairs_FUN_00568380(void)

#include "nocturne.h"

void core_stairs_cpp_factoryFuncStairs_FUN_00568380(void)

{
  CStairs *this_ptr;
  
  this_ptr = (CStairs *)debugAllocTracked1(0xa34);
  if (this_ptr == (CStairs *)0x0) {
    return;
  }
  core_stairs_cpp_CStairs_ctor_FUN_005683b0(this_ptr);
  return;
}
