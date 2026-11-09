// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_005a8ad0
// Address: 005a8ad0
// Address Range: [[005a8ad0, 005a8aeb]]
// Convention: unknown
// Signature: void core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0(void)

#include "nocturne.h"

void core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0(void)

{
  CCryptVessel *this_ptr;
  
  this_ptr = (CCryptVessel *)FUN_005c0f32(0x7f4);
  if (this_ptr == (CCryptVessel *)0x0) {
    return;
  }
  core_vessel_cpp_CCryptVessel_ctor_FUN_005a8b00(this_ptr);
  return;
}
