// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_00422ea0
// Address: 00422ea0
// Address Range: [[00422ea0, 00422ebb]]
// Convention: unknown
// Signature: void core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0(void)

#include "nocturne.h"

void core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0(void)

{
  CLightActor *this_ptr;
  
  this_ptr = (CLightActor *)debugAllocTracked1(0x3684);
  if (this_ptr == (CLightActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CLightActor_ctor_FUN_00422ed0(this_ptr);
  return;
}
