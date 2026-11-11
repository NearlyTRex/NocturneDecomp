// Name: core_wateract.cpp_factoryFuncWaterActor_FUN_00586970
// Address: 00586970
// Address Range: [[00586970, 0058698b]]
// Convention: unknown
// Signature: void core_wateract_cpp_factoryFuncWaterActor_FUN_00586970(void)

#include "nocturne.h"

void core_wateract_cpp_factoryFuncWaterActor_FUN_00586970(void)

{
  CWaterActor *this_ptr;
  
  this_ptr = (CWaterActor *)operator_new(0x2b394);
  if (this_ptr == (CWaterActor *)0x0) {
    return;
  }
  core_wateract_cpp_CWaterActor_ctor_FUN_005869a0(this_ptr);
  return;
}
