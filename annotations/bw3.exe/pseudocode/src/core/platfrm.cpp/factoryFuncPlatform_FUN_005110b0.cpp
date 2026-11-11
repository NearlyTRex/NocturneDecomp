// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_005110b0
// Address: 005110b0
// Address Range: [[005110b0, 005110cb]]
// Convention: unknown
// Signature: void core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0(void)

#include "nocturne.h"

void core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0(void)

{
  CPlatform *this_ptr;
  
  this_ptr = (CPlatform *)operator_new(0x728);
  if (this_ptr == (CPlatform *)0x0) {
    return;
  }
  core_platfrm_cpp_CPlatform_ctor_FUN_005110e0(this_ptr);
  return;
}
