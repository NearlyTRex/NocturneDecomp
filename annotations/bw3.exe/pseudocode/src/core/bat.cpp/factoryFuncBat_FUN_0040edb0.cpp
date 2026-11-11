// Name: core_bat.cpp_factoryFuncBat_FUN_0040edb0
// Address: 0040edb0
// Address Range: [[0040edb0, 0040edcb]]
// Convention: unknown
// Signature: void core_bat_cpp_factoryFuncBat_FUN_0040edb0(void)

#include "nocturne.h"

void core_bat_cpp_factoryFuncBat_FUN_0040edb0(void)

{
  CBat *this_ptr;
  
  this_ptr = (CBat *)operator_new(0x388);
  if (this_ptr == (CBat *)0x0) {
    return;
  }
  core_bat_cpp_CBat_ctor_FUN_0040ede0(this_ptr);
  return;
}
