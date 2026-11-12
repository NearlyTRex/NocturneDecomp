// Name: core_shadow.cpp_factoryFuncShadow_FUN_005434d0
// Address: 005434d0
// Address Range: [[005434d0, 005434eb]]
// Convention: unknown
// Signature: void core_shadow_cpp_factoryFuncShadow_FUN_005434d0(void)

#include "nocturne.h"

void core_shadow_cpp_factoryFuncShadow_FUN_005434d0(void)

{
  CShadow *this_ptr;
  
  this_ptr = (CShadow *)operator_new(0xd0e8);
  if (this_ptr == (CShadow *)0x0) {
    return;
  }
  core_shadow_cpp_CShadow_ctor_FUN_00543500(this_ptr);
  return;
}
