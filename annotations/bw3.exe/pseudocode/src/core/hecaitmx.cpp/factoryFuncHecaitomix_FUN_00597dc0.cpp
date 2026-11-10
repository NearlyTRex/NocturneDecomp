// Name: core_hecaitmx.cpp_factoryFuncHecaitomix_FUN_00597dc0
// Address: 00597dc0
// Address Range: [[00597dc0, 00597ddb]]
// Convention: unknown
// Signature: void core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0(void)

#include "nocturne.h"

void core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0(void)

{
  CHecaitomix *this_ptr;
  
  this_ptr = (CHecaitomix *)debugAllocTracked1(0xd07c);
  if (this_ptr == (CHecaitomix *)0x0) {
    return;
  }
  core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(this_ptr);
  return;
}
