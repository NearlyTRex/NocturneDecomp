// Name: core_exorcism.cpp_factoryFuncExorcism_FUN_0048a2e0
// Address: 0048a2e0
// Address Range: [[0048a2e0, 0048a2fb]]
// Convention: unknown
// Signature: void core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0(void)

#include "nocturne.h"

void core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0(void)

{
  CExorcism *this_ptr;
  
  this_ptr = (CExorcism *)operator_new(0x62c);
  if (this_ptr == (CExorcism *)0x0) {
    return;
  }
  core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(this_ptr);
  return;
}
