// Name: core_beast.cpp_factoryFuncBeast_FUN_004146c0
// Address: 004146c0
// Address Range: [[004146c0, 004146db]]
// Convention: unknown
// Signature: void core_beast_cpp_factoryFuncBeast_FUN_004146c0(void)

#include "nocturne.h"

void core_beast_cpp_factoryFuncBeast_FUN_004146c0(void)

{
  CBeast *this_ptr;
  
  this_ptr = (CBeast *)operator_new(0xc268);
  if (this_ptr == (CBeast *)0x0) {
    return;
  }
  core_beast_cpp_CBeast_ctor_FUN_004146f0(this_ptr);
  return;
}
