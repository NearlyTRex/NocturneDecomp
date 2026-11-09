// Name: core_hostage.cpp_factoryFuncHostage_FUN_004d12a0
// Address: 004d12a0
// Address Range: [[004d12a0, 004d12bb]]
// Convention: unknown
// Signature: void core_hostage_cpp_factoryFuncHostage_FUN_004d12a0(void)

#include "nocturne.h"

void core_hostage_cpp_factoryFuncHostage_FUN_004d12a0(void)

{
  CHostage *this_ptr;
  
  this_ptr = (CHostage *)FUN_005b8be2(0x24730);
  if (this_ptr == (CHostage *)0x0) {
    return;
  }
  core_hostage_cpp_CHostage_ctor_FUN_004d12d0(this_ptr);
  return;
}
