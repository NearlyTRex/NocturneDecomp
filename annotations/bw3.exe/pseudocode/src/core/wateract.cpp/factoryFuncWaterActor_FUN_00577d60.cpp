// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_00577d60
// Address: 00577d60
// Address Range: [[00577d60, 00577d7b]]
// Convention: unknown
// Signature: void core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60(void)

#include "nocturne.h"

void core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60(void)

{
  CWaterActor *this_ptr;
  
  this_ptr = (CWaterActor *)FUN_005a3cb2(0x2b23c);
  if (this_ptr == (CWaterActor *)0x0) {
    return;
  }
  core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(this_ptr);
  return;
}
