// Name: core_bird.cpp_factoryFuncBird_FUN_0040f9c0
// Address: 0040f9c0
// Address Range: [[0040f9c0, 0040f9db]]
// Convention: unknown
// Signature: void core_bird_cpp_factoryFuncBird_FUN_0040f9c0(void)

#include "nocturne.h"

void core_bird_cpp_factoryFuncBird_FUN_0040f9c0(void)

{
  CBird *this_ptr;
  
  this_ptr = (CBird *)operator_new(0x206bc);
  if (this_ptr == (CBird *)0x0) {
    return;
  }
  unkafter_bird_cpp_CBird_ctor_FUN_0040f9f0(this_ptr);
  return;
}
