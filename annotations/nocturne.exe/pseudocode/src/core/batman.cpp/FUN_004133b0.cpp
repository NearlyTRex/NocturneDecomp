// Name: core_batman.cpp_FUN_004133b0
// Address: 004133b0
// Address Range: [[004133b0, 004133cb]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_004133b0(void)

#include "nocturne.h"

void core_batman_cpp_FUN_004133b0(void)

{
  CBatman *this_ptr;
  
  this_ptr = (CBatman *)FUN_0056497c(0xbde0);
  if (this_ptr == (CBatman *)0x0) {
    return;
  }
  core_batman_cpp_CBatman_ctor_FUN_004133e0(this_ptr);
  return;
}
