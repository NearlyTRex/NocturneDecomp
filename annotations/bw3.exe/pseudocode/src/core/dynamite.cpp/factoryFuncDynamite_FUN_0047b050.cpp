// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_0047b050
// Address: 0047b050
// Address Range: [[0047b050, 0047b06b]]
// Convention: unknown
// Signature: void core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050(void)

#include "nocturne.h"

void core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050(void)

{
  CDynamite *this_ptr;
  
  this_ptr = (CDynamite *)operator_new(0x5a8);
  if (this_ptr == (CDynamite *)0x0) {
    return;
  }
  core_dynamite_cpp_CDynamite_ctor_FUN_0047b080(this_ptr);
  return;
}
