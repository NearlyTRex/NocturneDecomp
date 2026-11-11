// Name: core_baron.cpp_factoryFuncBaronWeapon_FUN_004108b0
// Address: 004108b0
// Address Range: [[004108b0, 004108cb]]
// Convention: unknown
// Signature: void core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0(void)

#include "nocturne.h"

void core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0(void)

{
  CBaronWeapon *this_ptr;
  
  this_ptr = (CBaronWeapon *)operator_new(0x6d8);
  if (this_ptr == (CBaronWeapon *)0x0) {
    return;
  }
  core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(this_ptr);
  return;
}
