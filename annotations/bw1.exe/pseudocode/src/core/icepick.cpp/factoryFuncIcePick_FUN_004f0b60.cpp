// Name: core_icepick.cpp_factoryFuncIcePick_FUN_004f0b60
// Address: 004f0b60
// Address Range: [[004f0b60, 004f0b7b]]
// Convention: unknown
// Signature: void core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60(void)

#include "nocturne.h"

void core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60(void)

{
  CIcePick *this_ptr;
  
  this_ptr = (CIcePick *)FUN_005c0f32(0x1ffdc);
  if (this_ptr == (CIcePick *)0x0) {
    return;
  }
  core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(this_ptr);
  return;
}
