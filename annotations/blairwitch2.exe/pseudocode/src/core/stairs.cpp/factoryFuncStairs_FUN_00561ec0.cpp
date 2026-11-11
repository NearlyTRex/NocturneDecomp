// Name: core_stairs.cpp_factoryFuncStairs_FUN_00561ec0
// Address: 00561ec0
// Address Range: [[00561ec0, 00561edb]]
// Convention: unknown
// Signature: void core_stairs_cpp_factoryFuncStairs_FUN_00561ec0(void)

#include "nocturne.h"

void core_stairs_cpp_factoryFuncStairs_FUN_00561ec0(void)

{
  CStairs *this_ptr;
  
  this_ptr = (CStairs *)operator_new(0xb90);
  if (this_ptr == (CStairs *)0x0) {
    return;
  }
  core_stairs_cpp_CStairs_ctor_FUN_00561ef0(this_ptr);
  return;
}
