// Name: core_stranger.cpp_factoryFuncStranger_FUN_00585240
// Address: 00585240
// Address Range: [[00585240, 0058525b]]
// Convention: unknown
// Signature: void core_stranger_cpp_factoryFuncStranger_FUN_00585240(void)

#include "nocturne.h"

void core_stranger_cpp_factoryFuncStranger_FUN_00585240(void)

{
  CStranger *this_ptr;
  
  this_ptr = (CStranger *)operator_new(0x20244);
  if (this_ptr == (CStranger *)0x0) {
    return;
  }
  core_stranger_cpp_CStranger_ctor_FUN_00585270(this_ptr);
  return;
}
