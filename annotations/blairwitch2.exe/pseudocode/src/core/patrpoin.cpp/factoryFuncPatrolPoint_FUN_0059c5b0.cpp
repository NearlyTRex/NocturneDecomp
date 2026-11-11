// Name: core_patrpoin.cpp_factoryFuncPatrolPoint_FUN_0059c5b0
// Address: 0059c5b0
// Address Range: [[0059c5b0, 0059c5cb]]
// Convention: unknown
// Signature: void core_patrpoin_cpp_factoryFuncPatrolPoint_FUN_0059c5b0(void)

#include "nocturne.h"

void core_patrpoin_cpp_factoryFuncPatrolPoint_FUN_0059c5b0(void)

{
  CPatrolPoint *this_ptr;
  
  this_ptr = (CPatrolPoint *)operator_new(0x6bc);
  if (this_ptr == (CPatrolPoint *)0x0) {
    return;
  }
  core_patrpoin_cpp_CPatrolPoint_ctor_FUN_0059c5e0(this_ptr);
  return;
}
