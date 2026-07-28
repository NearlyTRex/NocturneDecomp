// Name: core_frankgen.cpp_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 0049461b]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_00494600(void)

#include "nocturne.h"

void core_frankgen_cpp_FUN_00494600(void)

{
  CFrankenstienMachine *this_ptr;
  
  this_ptr = (CFrankenstienMachine *)FUN_0056497c(0x494);
  if (this_ptr == (CFrankenstienMachine *)0x0) {
    return;
  }
  core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(this_ptr);
  return;
}
