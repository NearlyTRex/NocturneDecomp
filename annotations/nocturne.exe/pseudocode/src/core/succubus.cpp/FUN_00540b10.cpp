// Name: core_succubus.cpp_FUN_00540b10
// Address: 00540b10
// Address Range: [[00540b10, 00540b2b]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00540b10(void)

#include "nocturne.h"

void core_succubus_cpp_FUN_00540b10(void)

{
  CSuccubus *this_ptr;
  
  this_ptr = (CSuccubus *)FUN_0056497c(0xedd0);
  if (this_ptr == (CSuccubus *)0x0) {
    return;
  }
  core_succubus_cpp_FUN_00540b40(this_ptr);
  return;
}
