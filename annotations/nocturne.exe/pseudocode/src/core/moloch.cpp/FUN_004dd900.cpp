// Name: core_moloch.cpp_FUN_004dd900
// Address: 004dd900
// Address Range: [[004dd900, 004dd91b]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_004dd900(void)

#include "nocturne.h"

void core_moloch_cpp_FUN_004dd900(void)

{
  CMoloch *this_ptr;
  
  this_ptr = (CMoloch *)FUN_0056497c(0x22a00);
  if (this_ptr == (CMoloch *)0x0) {
    return;
  }
  core_moloch_cpp_CMoloch_ctor_FUN_004dd930(this_ptr);
  return;
}
