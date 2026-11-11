// Name: core_flashlit.cpp_factoryFuncFlashlight_FUN_004b98e0
// Address: 004b98e0
// Address Range: [[004b98e0, 004b98fb]]
// Convention: unknown
// Signature: void core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0(void)

#include "nocturne.h"

void core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0(void)

{
  CFlashlight *this_ptr;
  
  this_ptr = (CFlashlight *)operator_new(0x578);
  if (this_ptr == (CFlashlight *)0x0) {
    return;
  }
  core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910(this_ptr);
  return;
}
