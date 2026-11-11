// Name: core_boxactor.cpp_factoryFuncBoxActor_FUN_00421c70
// Address: 00421c70
// Address Range: [[00421c70, 00421c8b]]
// Convention: unknown
// Signature: void core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70(void)

#include "nocturne.h"

void core_boxactor_cpp_factoryFuncBoxActor_FUN_00421c70(void)

{
  CBoxActor *this_ptr;
  
  this_ptr = (CBoxActor *)operator_new(0x678);
  if (this_ptr == (CBoxActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CBoxActor_ctor_FUN_00421ca0(this_ptr);
  return;
}
