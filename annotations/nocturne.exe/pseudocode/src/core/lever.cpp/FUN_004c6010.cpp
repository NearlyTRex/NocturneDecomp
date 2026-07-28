// Name: core_lever.cpp_FUN_004c6010
// Address: 004c6010
// Address Range: [[004c6010, 004c602b]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004c6010(void)

#include "nocturne.h"

void core_lever_cpp_FUN_004c6010(void)

{
  CLever *this_ptr;
  
  this_ptr = (CLever *)FUN_0056497c(0x80c);
  if (this_ptr == (CLever *)0x0) {
    return;
  }
  core_lever_cpp_CLever_ctor_FUN_004c6040(this_ptr);
  return;
}
