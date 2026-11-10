// Name: core_haystack.cpp_factoryFuncHaystack_FUN_004cc730
// Address: 004cc730
// Address Range: [[004cc730, 004cc74b]]
// Convention: unknown
// Signature: void core_haystack_cpp_factoryFuncHaystack_FUN_004cc730(void)

#include "nocturne.h"

void core_haystack_cpp_factoryFuncHaystack_FUN_004cc730(void)

{
  CHaystack *this_ptr;
  
  this_ptr = (CHaystack *)debugAllocTracked1(0x25658);
  if (this_ptr == (CHaystack *)0x0) {
    return;
  }
  core_haystack_cpp_CHaystack_ctor_FUN_004cc760(this_ptr);
  return;
}
