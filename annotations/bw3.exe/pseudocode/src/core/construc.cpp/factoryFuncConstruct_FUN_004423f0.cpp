// Name: core_construc.cpp_factoryFuncConstruct_FUN_004423f0
// Address: 004423f0
// Address Range: [[004423f0, 0044240b]]
// Convention: unknown
// Signature: void core_construc_cpp_factoryFuncConstruct_FUN_004423f0(void)

#include "nocturne.h"

void core_construc_cpp_factoryFuncConstruct_FUN_004423f0(void)

{
  CConstruct *this_ptr;
  
  this_ptr = (CConstruct *)operator_new(0xd860);
  if (this_ptr == (CConstruct *)0x0) {
    return;
  }
  core_construc_cpp_CConstruct_ctor_FUN_00442420(this_ptr);
  return;
}
