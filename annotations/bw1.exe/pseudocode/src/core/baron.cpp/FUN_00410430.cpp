// Name: core_baron.cpp_FUN_00410430
// Address: 00410430
// Address Range: [[00410430, 0041044b]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410430(void)

#include "nocturne.h"

void core_baron_cpp_FUN_00410430(void)

{
  CBaronWeapon *this_ptr;
  
  this_ptr = (CBaronWeapon *)FUN_005c0f32(0x57c);
  if (this_ptr == (CBaronWeapon *)0x0) {
    return;
  }
  core_baron_cpp_CBaronWeapon_ctor_FUN_00410460(this_ptr);
  return;
}
