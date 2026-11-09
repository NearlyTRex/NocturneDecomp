// Name: core_dynamite.cpp_factoryFuncDynamite_FUN_00479fc0
// Address: 00479fc0
// Address Range: [[00479fc0, 00479fdb]]
// Convention: unknown
// Signature: void core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0(void)

#include "nocturne.h"

void core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0(void)

{
  CDynamite *this_ptr;
  
  this_ptr = (CDynamite *)FUN_005b8be2(0x6e8);
  if (this_ptr == (CDynamite *)0x0) {
    return;
  }
  core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0(this_ptr);
  return;
}
