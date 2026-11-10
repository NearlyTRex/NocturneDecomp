// Name: core_bat.cpp_factoryFuncBat_FUN_00410b20
// Address: 00410b20
// Address Range: [[00410b20, 00410b3b]]
// Convention: unknown
// Signature: void core_bat_cpp_factoryFuncBat_FUN_00410b20(void)

#include "nocturne.h"

void core_bat_cpp_factoryFuncBat_FUN_00410b20(void)

{
  CBat *this_ptr;
  
  this_ptr = (CBat *)debugAllocTracked1(0x388);
  if (this_ptr == (CBat *)0x0) {
    return;
  }
  core_bat_cpp_CBat_ctor_FUN_00410b50(this_ptr);
  return;
}
