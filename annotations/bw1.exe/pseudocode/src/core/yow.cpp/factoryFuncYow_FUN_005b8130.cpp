// Name: core_yow.cpp_factoryFuncYow_FUN_005b8130
// Address: 005b8130
// Address Range: [[005b8130, 005b814b]]
// Convention: unknown
// Signature: void core_yow_cpp_factoryFuncYow_FUN_005b8130(void)

#include "nocturne.h"

void core_yow_cpp_factoryFuncYow_FUN_005b8130(void)

{
  CYow *this_ptr;
  
  this_ptr = (CYow *)FUN_005c0f32(0xc2b8);
  if (this_ptr == (CYow *)0x0) {
    return;
  }
  core_xform_cpp_CYow_ctor_FUN_005b8160(this_ptr);
  return;
}
