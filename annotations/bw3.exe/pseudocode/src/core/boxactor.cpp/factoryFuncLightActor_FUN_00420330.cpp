// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_00420330
// Address: 00420330
// Address Range: [[00420330, 0042034b]]
// Convention: unknown
// Signature: void core_boxactor_cpp_factoryFuncLightActor_FUN_00420330(void)

#include "nocturne.h"

void core_boxactor_cpp_factoryFuncLightActor_FUN_00420330(void)

{
  CLightActor *this_ptr;
  
  this_ptr = (CLightActor *)operator_new(0x36f4);
  if (this_ptr == (CLightActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CLightActor_ctor_FUN_00420360(this_ptr);
  return;
}
