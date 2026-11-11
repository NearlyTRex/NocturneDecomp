// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_0041cf30
// Address: 0041cf30
// Address Range: [[0041cf30, 0041cf4b]]
// Convention: unknown
// Signature: void core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30(void)

#include "nocturne.h"

void core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30(void)

{
  CLightActor *this_ptr;
  
  this_ptr = (CLightActor *)operator_new(0x37e4);
  if (this_ptr == (CLightActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(this_ptr);
  return;
}
