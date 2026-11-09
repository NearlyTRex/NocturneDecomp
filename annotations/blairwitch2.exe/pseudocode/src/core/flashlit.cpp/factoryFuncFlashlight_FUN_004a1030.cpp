// Name: core_flashlit.cpp_factoryFuncFlashlight_FUN_004a1030
// Address: 004a1030
// Address Range: [[004a1030, 004a104b]]
// Convention: unknown
// Signature: void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a1030(void)

#include "nocturne.h"

void core_flashlit_cpp_factoryFuncFlashlight_FUN_004a1030(void)

{
  CFlashlight *this_ptr;
  
  this_ptr = (CFlashlight *)FUN_005b8be2(0x6d4);
  if (this_ptr == (CFlashlight *)0x0) {
    return;
  }
  core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060(this_ptr);
  return;
}
