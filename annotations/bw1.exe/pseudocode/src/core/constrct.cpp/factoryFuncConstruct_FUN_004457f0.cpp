// Name: core_constrct.cpp_factoryFuncConstruct_FUN_004457f0
// Address: 004457f0
// Address Range: [[004457f0, 0044580b]]
// Convention: unknown
// Signature: void core_constrct_cpp_factoryFuncConstruct_FUN_004457f0(void)

#include "nocturne.h"

void core_constrct_cpp_factoryFuncConstruct_FUN_004457f0(void)

{
  CConstruct *this_ptr;
  
  this_ptr = (CConstruct *)FUN_005c0f32(0xca6c);
  if (this_ptr == (CConstruct *)0x0) {
    return;
  }
  core_constrct_cpp_CConstruct_ctor_FUN_00445820(this_ptr);
  return;
}
