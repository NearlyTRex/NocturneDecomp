// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004df110
// Address: 004df110
// Address Range: [[004df110, 004df12b]]
// Convention: unknown
// Signature: void core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110(void)

#include "nocturne.h"

void core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110(void)

{
  CKeyActor *this_ptr;
  
  this_ptr = (CKeyActor *)debugAllocTracked1(0x478);
  if (this_ptr == (CKeyActor *)0x0) {
    return;
  }
  core_keyactor_cpp_CKeyActor_ctor_FUN_004df140(this_ptr);
  return;
}
