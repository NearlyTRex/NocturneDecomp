// Name: core_pendulum.cpp_factoryFuncPendulum_FUN_00514ca0
// Address: 00514ca0
// Address Range: [[00514ca0, 00514cbb]]
// Convention: unknown
// Signature: void core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0(void)

#include "nocturne.h"

void core_pendulum_cpp_factoryFuncPendulum_FUN_00514ca0(void)

{
  CPendulum *this_ptr;
  
  this_ptr = (CPendulum *)operator_new(0x5a0);
  if (this_ptr == (CPendulum *)0x0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_00514cd0(this_ptr);
  return;
}
