// Name: core_baron.cpp_factoryFuncBaron_FUN_0040f1e0
// Address: 0040f1e0
// Address Range: [[0040f1e0, 0040f1fb]]
// Convention: unknown
// Signature: void core_baron_cpp_factoryFuncBaron_FUN_0040f1e0(void)

#include "nocturne.h"

void core_baron_cpp_factoryFuncBaron_FUN_0040f1e0(void)

{
  CBaron *this_ptr;
  
  this_ptr = (CBaron *)operator_new(0x200ac);
  if (this_ptr == (CBaron *)0x0) {
    return;
  }
  core_baron_cpp_CBaron_ctor_FUN_0040f210(this_ptr);
  return;
}
