// Name: core_haystack.cpp_factoryFuncHaystack_FUN_004e8ff0
// Address: 004e8ff0
// Address Range: [[004e8ff0, 004e900b]]
// Convention: unknown
// Signature: void core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0(void)

#include "nocturne.h"

void core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0(void)

{
  CHaystack *this_ptr;
  
  this_ptr = (CHaystack *)debugAllocTracked1(0x1ffc4);
  if (this_ptr == (CHaystack *)0x0) {
    return;
  }
  core_haystack_cpp_CHaystack_ctor_FUN_004e9020(this_ptr);
  return;
}
