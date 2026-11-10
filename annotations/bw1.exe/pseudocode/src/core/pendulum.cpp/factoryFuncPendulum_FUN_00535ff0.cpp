// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_00535ff0
// Address: 00535ff0
// Address Range: [[00535ff0, 0053600b]]
// Convention: unknown
// Signature: void core_pendulum_cpp_factoryFuncPendulum_FUN_00535ff0(void)

#include "nocturne.h"

void core_pendulum_cpp_factoryFuncPendulum_FUN_00535ff0(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)debugAllocTracked1(0x444);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_00536020(this_ptr);
  return;
}
