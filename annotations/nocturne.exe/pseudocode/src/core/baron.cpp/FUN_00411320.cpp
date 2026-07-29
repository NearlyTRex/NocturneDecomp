// Name: core_baron.cpp_FUN_00411320
// Address: 00411320
// Address Range: [[00411320, 0041133b]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00411320(void)

#include "nocturne.h"

void core_baron_cpp_FUN_00411320(void)

{
  CBaronWeapon *this_ptr;
  
  this_ptr = (CBaronWeapon *)FUN_0056497c(0x574);
  if (this_ptr == (CBaronWeapon *)0x0) {
    return;
  }
  core_baron_cpp_CBaronWeapon_ctor_FUN_00411350(this_ptr);
  return;
}
