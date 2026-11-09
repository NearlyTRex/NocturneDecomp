// Name: core_stranger.cpp_factoryFuncStranger_FUN_005627c0
// Address: 005627c0
// Address Range: [[005627c0, 005627db]]
// Convention: unknown
// Signature: void core_stranger_cpp_factoryFuncStranger_FUN_005627c0(void)

#include "nocturne.h"

void core_stranger_cpp_factoryFuncStranger_FUN_005627c0(void)

{
  CStranger *this_ptr;
  
  this_ptr = (CStranger *)FUN_005b8be2(0x258dc);
  if (this_ptr == (CStranger *)0x0) {
    return;
  }
  core_stranger_cpp_CStranger_ctor_FUN_005627f0(this_ptr);
  return;
}
