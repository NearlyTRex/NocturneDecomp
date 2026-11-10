// Name: core_stairs.cpp_factoryFuncStairs_FUN_00584910
// Address: 00584910
// Address Range: [[00584910, 0058492b]]
// Convention: unknown
// Signature: void core_stairs_cpp_factoryFuncStairs_FUN_00584910(void)

#include "nocturne.h"

void core_stairs_cpp_factoryFuncStairs_FUN_00584910(void)

{
  CStairs *this_ptr;
  
  this_ptr = (CStairs *)debugAllocTracked1(0xa34);
  if (this_ptr == (CStairs *)0x0) {
    return;
  }
  core_stairs_cpp_CStairs_ctor_FUN_00584940(this_ptr);
  return;
}
