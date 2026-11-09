// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_0050dcd0
// Address: 0050dcd0
// Address Range: [[0050dcd0, 0050dceb]]
// Convention: unknown
// Signature: void core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0(void)

#include "nocturne.h"

void core_pendulum_cpp_factoryFuncPendulum_FUN_0050dcd0(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)FUN_005a3cb2(0x444);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_0050dd00(this_ptr);
  return;
}
