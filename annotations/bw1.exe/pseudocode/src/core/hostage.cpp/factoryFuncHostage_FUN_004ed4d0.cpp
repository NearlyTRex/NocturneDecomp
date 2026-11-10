// Name: core_hostage.cpp_factoryFuncHostage_FUN_004ed4d0
// Address: 004ed4d0
// Address Range: [[004ed4d0, 004ed4eb]]
// Convention: unknown
// Signature: void core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0(void)

#include "nocturne.h"

void core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0(void)

{
  CHostage *this_ptr;
  
  this_ptr = (CHostage *)debugAllocTracked1(0x1fea0);
  if (this_ptr == (CHostage *)0x0) {
    return;
  }
  core_hostage_cpp_CHostage_ctor_FUN_004ed500(this_ptr);
  return;
}
