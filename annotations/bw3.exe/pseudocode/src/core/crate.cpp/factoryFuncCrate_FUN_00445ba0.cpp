// Name: core_crate.cpp_factoryFuncCrate_FUN_00445ba0
// Address: 00445ba0
// Address Range: [[00445ba0, 00445bbb]]
// Convention: unknown
// Signature: void core_crate_cpp_factoryFuncCrate_FUN_00445ba0(void)

#include "nocturne.h"

void core_crate_cpp_factoryFuncCrate_FUN_00445ba0(void)

{
  CCrate *this_ptr;
  
  this_ptr = (CCrate *)debugAllocTracked1(0x2fc);
  if (this_ptr == (CCrate *)0x0) {
    return;
  }
  core_crate_cpp_CCrate_ctor_FUN_00445bd0(this_ptr);
  return;
}
