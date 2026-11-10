// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_004924b0
// Address: 004924b0
// Address Range: [[004924b0, 004924cb]]
// Convention: unknown
// Signature: void core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0(void)

#include "nocturne.h"

void core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0(void)

{
  CDynamite *this_ptr;
  
  this_ptr = (CDynamite *)debugAllocTracked1(0x58c);
  if (this_ptr == (CDynamite *)0x0) {
    return;
  }
  core_dynamite_cpp_CDynamite_ctor_FUN_004924e0(this_ptr);
  return;
}
