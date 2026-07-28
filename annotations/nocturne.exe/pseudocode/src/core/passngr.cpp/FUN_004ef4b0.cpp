// Name: core_passngr.cpp_FUN_004ef4b0
// Address: 004ef4b0
// Address Range: [[004ef4b0, 004ef4cb]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_004ef4b0(void)

#include "nocturne.h"

void core_passngr_cpp_FUN_004ef4b0(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)FUN_0056497c(0x202b0);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(this_ptr);
  return;
}
