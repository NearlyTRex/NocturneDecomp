// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_00576320
// Address: 00576320
// Address Range: [[00576320, 0057633b]]
// Convention: unknown
// Signature: void core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320(void)

#include "nocturne.h"

void core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320(void)

{
  CCryptVessel *this_ptr;
  
  this_ptr = (CCryptVessel *)FUN_005a3cb2(0x7f4);
  if (this_ptr == (CCryptVessel *)0x0) {
    return;
  }
  core_vessel_cpp_CCryptVessel_ctor_FUN_00576350(this_ptr);
  return;
}
