// Name: core_baron.cpp_factoryFuncBaron_FUN_0040f660
// Address: 0040f660
// Address Range: [[0040f660, 0040f67b]]
// Convention: unknown
// Signature: void core_baron_cpp_factoryFuncBaron_FUN_0040f660(void)

#include "nocturne.h"

void core_baron_cpp_factoryFuncBaron_FUN_0040f660(void)

{
  CBaron *this_ptr;
  
  this_ptr = (CBaron *)FUN_005b8be2(0x25740);
  if (this_ptr == (CBaron *)0x0) {
    return;
  }
  core_baron_cpp_CBaron_ctor_FUN_0040f690(this_ptr);
  return;
}
