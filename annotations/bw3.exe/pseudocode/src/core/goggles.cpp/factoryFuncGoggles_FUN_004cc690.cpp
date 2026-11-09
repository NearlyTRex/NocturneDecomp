// Name: core_goggles.cpp_factoryFuncGoggles_FUN_004cc690
// Address: 004cc690
// Address Range: [[004cc690, 004cc6ab]]
// Convention: unknown
// Signature: void core_goggles_cpp_factoryFuncGoggles_FUN_004cc690(void)

#include "nocturne.h"

void core_goggles_cpp_factoryFuncGoggles_FUN_004cc690(void)

{
  CGoggles *this_ptr;
  
  this_ptr = (CGoggles *)FUN_005a3cb2(0x2d8);
  if (this_ptr == (CGoggles *)0x0) {
    return;
  }
  core_goggles_cpp_CGoggles_ctor_FUN_004cc6c0(this_ptr);
  return;
}
