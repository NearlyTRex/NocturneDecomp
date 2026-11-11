// Name: core_boxactor.cpp_factoryFuncBoxActor_FUN_0041bd00
// Address: 0041bd00
// Address Range: [[0041bd00, 0041bd1b]]
// Convention: unknown
// Signature: void core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00(void)

#include "nocturne.h"

void core_boxactor_cpp_factoryFuncBoxActor_FUN_0041bd00(void)

{
  CBoxActor *this_ptr;
  
  this_ptr = (CBoxActor *)operator_new(0x7d4);
  if (this_ptr == (CBoxActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(this_ptr);
  return;
}
