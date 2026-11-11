// Name: core_setedit.cpp_factoryFuncShadow_FUN_0053c1d0
// Address: 0053c1d0
// Address Range: [[0053c1d0, 0053c1eb]]
// Convention: unknown
// Signature: void core_setedit_cpp_factoryFuncShadow_FUN_0053c1d0(void)

#include "nocturne.h"

void core_setedit_cpp_factoryFuncShadow_FUN_0053c1d0(void)

{
  CShadow *this_ptr;
  
  this_ptr = (CShadow *)operator_new(0x10b80);
  if (this_ptr == (CShadow *)0x0) {
    return;
  }
  core_shadow_cpp_CShadow_ctor_FUN_0053c200(this_ptr);
  return;
}
