// Name: core_passngr.cpp_factoryFuncPassenger_FUN_00532740
// Address: 00532740
// Address Range: [[00532740, 0053275b]]
// Convention: unknown
// Signature: void core_passngr_cpp_factoryFuncPassenger_FUN_00532740(void)

#include "nocturne.h"

void core_passngr_cpp_factoryFuncPassenger_FUN_00532740(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)debugAllocTracked1(0x207f8);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_00532770(this_ptr);
  return;
}
