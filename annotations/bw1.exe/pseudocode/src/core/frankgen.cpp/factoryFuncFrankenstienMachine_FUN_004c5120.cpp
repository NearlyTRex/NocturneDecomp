// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004c5120
// Address: 004c5120
// Address Range: [[004c5120, 004c513b]]
// Convention: unknown
// Signature: void core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120(void)

#include "nocturne.h"

void core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120(void)

{
  CFrankenstienMachine *this_ptr;
  
  this_ptr = (CFrankenstienMachine *)debugAllocTracked1(0x49c);
  if (this_ptr == (CFrankenstienMachine *)0x0) {
    return;
  }
  core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004c5150(this_ptr);
  return;
}
