// Name: core_bird.cpp_factoryFuncBird_FUN_004151c0
// Address: 004151c0
// Address Range: [[004151c0, 004151db]]
// Convention: unknown
// Signature: void core_bird_cpp_factoryFuncBird_FUN_004151c0(void)

#include "nocturne.h"

void core_bird_cpp_factoryFuncBird_FUN_004151c0(void)

{
  CBird *this_ptr;
  
  this_ptr = (CBird *)operator_new(0x1fac0);
  if (this_ptr == (CBird *)0x0) {
    return;
  }
  core_bird_cpp_CBird_ctor_FUN_004151f0(this_ptr);
  return;
}
