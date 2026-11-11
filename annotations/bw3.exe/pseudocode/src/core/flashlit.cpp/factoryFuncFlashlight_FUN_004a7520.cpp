// Name: core_flashlit.cpp_factoryFuncFlashlight_FUN_004a7520
// Address: 004a7520
// Address Range: [[004a7520, 004a753b]]
// Convention: unknown
// Signature: void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520(void)

#include "nocturne.h"

void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520(void)

{
  CFlashlight *this_ptr;
  
  this_ptr = (CFlashlight *)operator_new(0x594);
  if (this_ptr == (CFlashlight *)0x0) {
    return;
  }
  core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(this_ptr);
  return;
}
