// Name: core_flashlit.cpp_FUN_0048ed30
// Address: 0048ed30
// Address Range: [[0048ed30, 0048ed4b]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_0048ed30(void)

#include "nocturne.h"

void core_flashlit_cpp_FUN_0048ed30(void)

{
  CFlashlight *this_ptr;
  
  this_ptr = (CFlashlight *)FUN_0056497c(0x570);
  if (this_ptr == (CFlashlight *)0x0) {
    return;
  }
  core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(this_ptr);
  return;
}
