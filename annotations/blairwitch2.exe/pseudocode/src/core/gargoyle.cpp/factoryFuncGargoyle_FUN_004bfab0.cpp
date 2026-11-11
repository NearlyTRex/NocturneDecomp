// Name: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004bfab0
// Address: 004bfab0
// Address Range: [[004bfab0, 004bfacb]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004bfab0(void)

#include "nocturne.h"

void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004bfab0(void)

{
  CGargoyle *this_ptr;
  
  this_ptr = (CGargoyle *)operator_new(0x10b54);
  if (this_ptr == (CGargoyle *)0x0) {
    return;
  }
  core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0(this_ptr);
  return;
}
