// Name: core_goggles.cpp_factoryFuncGoggles_FUN_004e3b00
// Address: 004e3b00
// Address Range: [[004e3b00, 004e3b1b]]
// Convention: unknown
// Signature: void core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00(void)

#include "nocturne.h"

void core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00(void)

{
  CGoggles *this_ptr;
  
  this_ptr = (CGoggles *)debugAllocTracked1(0x2d8);
  if (this_ptr == (CGoggles *)0x0) {
    return;
  }
  core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(this_ptr);
  return;
}
