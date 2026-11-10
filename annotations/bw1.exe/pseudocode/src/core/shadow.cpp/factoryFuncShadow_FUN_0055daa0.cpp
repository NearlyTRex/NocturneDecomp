// Name: core_shadow.cpp_factoryFuncShadow_FUN_0055daa0
// Address: 0055daa0
// Address Range: [[0055daa0, 0055dabb]]
// Convention: unknown
// Signature: void core_shadow_cpp_factoryFuncShadow_FUN_0055daa0(void)

#include "nocturne.h"

void core_shadow_cpp_factoryFuncShadow_FUN_0055daa0(void)

{
  CShadow *this_ptr;
  
  this_ptr = (CShadow *)debugAllocTracked1(0xc314);
  if (this_ptr == (CShadow *)0x0) {
    return;
  }
  core_shadow_cpp_CShadow_ctor_FUN_0055dad0(this_ptr);
  return;
}
