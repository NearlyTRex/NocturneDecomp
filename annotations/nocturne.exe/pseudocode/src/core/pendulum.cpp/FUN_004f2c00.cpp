// Name: core_pendulum.cpp_FUN_004f2c00
// Address: 004f2c00
// Address Range: [[004f2c00, 004f2c1b]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_004f2c00(void)

#include "nocturne.h"

void core_pendulum_cpp_FUN_004f2c00(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)FUN_0056497c(0x43c);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(this_ptr);
  return;
}
