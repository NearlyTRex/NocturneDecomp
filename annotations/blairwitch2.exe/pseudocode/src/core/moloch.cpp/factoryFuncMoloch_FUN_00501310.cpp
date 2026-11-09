// Name: core_moloch.cpp_factoryFuncMoloch_FUN_00501310
// Address: 00501310
// Address Range: [[00501310, 0050132b]]
// Convention: unknown
// Signature: void core_moloch_cpp_factoryFuncMoloch_FUN_00501310(void)

#include "nocturne.h"

void core_moloch_cpp_factoryFuncMoloch_FUN_00501310(void)

{
  CMoloch *this_ptr;
  
  this_ptr = (CMoloch *)FUN_005b8be2(0x28604);
  if (this_ptr == (CMoloch *)0x0) {
    return;
  }
  core_moloch_cpp_CMoloch_ctor_FUN_00501340(this_ptr);
  return;
}
