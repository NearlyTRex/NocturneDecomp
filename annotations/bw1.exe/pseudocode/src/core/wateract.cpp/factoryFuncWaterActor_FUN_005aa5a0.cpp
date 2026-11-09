// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_005aa5a0
// Address: 005aa5a0
// Address Range: [[005aa5a0, 005aa5bb]]
// Convention: unknown
// Signature: void core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0(void)

#include "nocturne.h"

void core_wateract_cpp_factoryFuncWaterActor_FUN_005aa5a0(void)

{
  CWaterActor *this_ptr;
  
  this_ptr = (CWaterActor *)FUN_005c0f32(0x2b238);
  if (this_ptr == (CWaterActor *)0x0) {
    return;
  }
  core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0(this_ptr);
  return;
}
