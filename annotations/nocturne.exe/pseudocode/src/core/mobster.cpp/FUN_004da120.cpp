// Name: core_mobster.cpp_FUN_004da120
// Address: 004da120
// Address Range: [[004da120, 004da13b]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_004da120(void)

#include "nocturne.h"

void core_mobster_cpp_FUN_004da120(void)

{
  CMobster *this_ptr;
  
  this_ptr = (CMobster *)FUN_0056497c(0xbdfc);
  if (this_ptr == (CMobster *)0x0) {
    return;
  }
  core_mobster_cpp_CMobster_ctor_FUN_004da150(this_ptr);
  return;
}
