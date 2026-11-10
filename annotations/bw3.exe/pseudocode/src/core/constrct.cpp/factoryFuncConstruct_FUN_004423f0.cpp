// Name: core_constrct.cpp_factoryFuncConstruct_FUN_004423f0
// Address: 004423f0
// Address Range: [[004423f0, 0044240b]]
// Convention: unknown
// Signature: void core_constrct_cpp_factoryFuncConstruct_FUN_004423f0(void)

#include "nocturne.h"

void core_constrct_cpp_factoryFuncConstruct_FUN_004423f0(void)

{
  CConstruct *this_ptr;
  
  this_ptr = (CConstruct *)debugAllocTracked1(0xd860);
  if (this_ptr == (CConstruct *)0x0) {
    return;
  }
  core_constrct_cpp_CConstruct_ctor_FUN_00442420(this_ptr);
  return;
}
