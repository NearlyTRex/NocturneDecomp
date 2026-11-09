// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_00584ea0
// Address: 00584ea0
// Address Range: [[00584ea0, 00584ebb]]
// Convention: unknown
// Signature: void core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0(void)

#include "nocturne.h"

void core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0(void)

{
  CCryptVessel *this_ptr;
  
  this_ptr = (CCryptVessel *)FUN_005b8be2(0xaac);
  if (this_ptr == (CCryptVessel *)0x0) {
    return;
  }
  core_vessel_cpp_CCryptVessel_ctor_FUN_00584ed0(this_ptr);
  return;
}
