// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004ac170
// Address: 004ac170
// Address Range: [[004ac170, 004ac18b]]
// Convention: unknown
// Signature: void core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170(void)

#include "nocturne.h"

void core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170(void)

{
  CFrankenstienMachine *this_ptr;
  
  this_ptr = (CFrankenstienMachine *)debugAllocTracked1(0x5f8);
  if (this_ptr == (CFrankenstienMachine *)0x0) {
    return;
  }
  core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(this_ptr);
  return;
}
