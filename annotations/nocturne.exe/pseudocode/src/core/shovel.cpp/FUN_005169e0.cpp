// Name: core_shovel.cpp_FUN_005169e0
// Address: 005169e0
// Address Range: [[005169e0, 005169fb]]
// Convention: unknown
// Signature: void core_shovel_cpp_FUN_005169e0(void)

#include "nocturne.h"

void core_shovel_cpp_FUN_005169e0(void)

{
  CShovel *this_ptr;
  
  this_ptr = (CShovel *)FUN_0056497c(0x570);
  if (this_ptr == (CShovel *)0x0) {
    return;
  }
  core_shovel_cpp_CShovel_ctor_FUN_00516a10(this_ptr);
  return;
}
