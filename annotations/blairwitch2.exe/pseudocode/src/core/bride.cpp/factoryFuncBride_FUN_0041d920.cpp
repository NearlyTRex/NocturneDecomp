// Name: core_bride.cpp_factoryFuncBride_FUN_0041d920
// Address: 0041d920
// Address Range: [[0041d920, 0041d93b]]
// Convention: unknown
// Signature: void core_bride_cpp_factoryFuncBride_FUN_0041d920(void)

#include "nocturne.h"

void core_bride_cpp_factoryFuncBride_FUN_0041d920(void)

{
  CBride *this_ptr;
  
  this_ptr = (CBride *)debugAllocTracked1(0x10b28);
  if (this_ptr == (CBride *)0x0) {
    return;
  }
  core_bride_cpp_CBride_ctor_FUN_0041d950(this_ptr);
  return;
}
