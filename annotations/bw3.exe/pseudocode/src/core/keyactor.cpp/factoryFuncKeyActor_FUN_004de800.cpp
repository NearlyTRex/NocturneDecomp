// Name: core_keyactor.cpp_factoryFuncKeyActor_FUN_004de800
// Address: 004de800
// Address Range: [[004de800, 004de81b]]
// Convention: unknown
// Signature: void core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800(void)

#include "nocturne.h"

void core_keyactor_cpp_factoryFuncKeyActor_FUN_004de800(void)

{
  CKeyActor *this_ptr;
  
  this_ptr = (CKeyActor *)operator_new(0x31c);
  if (this_ptr == (CKeyActor *)0x0) {
    return;
  }
  core_keyactor_cpp_CKeyActor_ctor_FUN_004de830(this_ptr);
  return;
}
