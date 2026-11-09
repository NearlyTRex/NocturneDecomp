// Name: core_baal.cpp_factoryFuncBaal_FUN_00596630
// Address: 00596630
// Address Range: [[00596630, 0059664b]]
// Convention: unknown
// Signature: void core_baal_cpp_factoryFuncBaal_FUN_00596630(void)

#include "nocturne.h"

void core_baal_cpp_factoryFuncBaal_FUN_00596630(void)

{
  CBaal *this_ptr;
  
  this_ptr = (CBaal *)FUN_005a3cb2(0xd0bc);
  if (this_ptr == (CBaal *)0x0) {
    return;
  }
  core_baal_cpp_CBaal_ctor_FUN_00596660(this_ptr);
  return;
}
