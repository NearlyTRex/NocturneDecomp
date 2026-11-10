// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004fc4e0
// Address: 004fc4e0
// Address Range: [[004fc4e0, 004fc4fb]]
// Convention: unknown
// Signature: void core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0(void)

#include "nocturne.h"

void core_keyactor_cpp_factoryFuncKeyActor_FUN_004fc4e0(void)

{
  CKeyActor *this_ptr;
  
  this_ptr = (CKeyActor *)debugAllocTracked1(0x31c);
  if (this_ptr == (CKeyActor *)0x0) {
    return;
  }
  core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(this_ptr);
  return;
}
