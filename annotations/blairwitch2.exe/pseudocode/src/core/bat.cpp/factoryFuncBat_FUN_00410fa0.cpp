// Name: core_bat.cpp_factoryFuncBat_FUN_00410fa0
// Address: 00410fa0
// Address Range: [[00410fa0, 00410fbb]]
// Convention: unknown
// Signature: void core_bat_cpp_factoryFuncBat_FUN_00410fa0(void)

#include "nocturne.h"

void core_bat_cpp_factoryFuncBat_FUN_00410fa0(void)

{
  CBat *this_ptr;
  
  this_ptr = (CBat *)operator_new(0x4e4);
  if (this_ptr == (CBat *)0x0) {
    return;
  }
  core_bat_cpp_CBat_ctor_FUN_00410fd0(this_ptr);
  return;
}
