// Name: core_cross.cpp_factoryFuncCross_FUN_005a69c0
// Address: 005a69c0
// Address Range: [[005a69c0, 005a69db]]
// Convention: unknown
// Signature: void core_cross_cpp_factoryFuncCross_FUN_005a69c0(void)

#include "nocturne.h"

void core_cross_cpp_factoryFuncCross_FUN_005a69c0(void)

{
  CCross *this_ptr;
  
  this_ptr = (CCross *)operator_new(0x848);
  if (this_ptr == (CCross *)0x0) {
    return;
  }
  unkafter_cross_cpp_CCross_ctor_FUN_005a69f0(this_ptr);
  return;
}
