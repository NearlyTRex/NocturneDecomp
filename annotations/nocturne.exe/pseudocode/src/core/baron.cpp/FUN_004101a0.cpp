// Name: core_baron.cpp_FUN_004101a0
// Address: 004101a0
// Address Range: [[004101a0, 004101bb]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_004101a0(void)

#include "nocturne.h"

void core_baron_cpp_FUN_004101a0(void)

{
  CBaron *this_ptr;
  
  this_ptr = (CBaron *)FUN_0056497c(0x1fb3c);
  if (this_ptr == (CBaron *)0x0) {
    return;
  }
  core_baron_cpp_CBaron_ctor_FUN_004101d0(this_ptr);
  return;
}
