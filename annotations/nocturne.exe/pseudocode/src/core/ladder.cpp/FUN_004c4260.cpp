// Name: core_ladder.cpp_FUN_004c4260
// Address: 004c4260
// Address Range: [[004c4260, 004c427b]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004c4260(void)

#include "nocturne.h"

void core_ladder_cpp_FUN_004c4260(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)FUN_0056497c(0x2f8);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_CLadder_ctor_FUN_004c4290(this_ptr);
  return;
}
