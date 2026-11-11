// Name: core_burncrss.cpp_factoryFuncBurncross_FUN_00424400
// Address: 00424400
// Address Range: [[00424400, 0042441b]]
// Convention: unknown
// Signature: void core_burncrss_cpp_factoryFuncBurncross_FUN_00424400(void)

#include "nocturne.h"

void core_burncrss_cpp_factoryFuncBurncross_FUN_00424400(void)

{
  CBurncross *this_ptr;
  
  this_ptr = (CBurncross *)operator_new(0x1acc);
  if (this_ptr == (CBurncross *)0x0) {
    return;
  }
  core_burncrss_cpp_CBurncross_ctor_FUN_00424430(this_ptr);
  return;
}
