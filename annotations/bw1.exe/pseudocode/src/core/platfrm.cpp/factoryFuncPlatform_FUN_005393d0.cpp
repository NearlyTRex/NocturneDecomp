// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_005393d0
// Address: 005393d0
// Address Range: [[005393d0, 005393eb]]
// Convention: unknown
// Signature: void core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0(void)

#include "nocturne.h"

void core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0(void)

{
  CPlatform *this_ptr;
  
  this_ptr = (CPlatform *)FUN_005c0f32(0x728);
  if (this_ptr == (CPlatform *)0x0) {
    return;
  }
  core_platfrm_cpp_CPlatform_ctor_FUN_00539400(this_ptr);
  return;
}
