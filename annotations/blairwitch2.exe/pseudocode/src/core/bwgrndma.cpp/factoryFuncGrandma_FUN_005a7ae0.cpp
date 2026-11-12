// Name: core_bwgrndma.cpp_factoryFuncGrandma_FUN_005a7ae0
// Address: 005a7ae0
// Address Range: [[005a7ae0, 005a7afb]]
// Convention: unknown
// Signature: void core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0(void)

#include "nocturne.h"

void core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0(void)

{
  CGrandma *this_ptr;
  
  this_ptr = (CGrandma *)operator_new(0x11854);
  if (this_ptr == (CGrandma *)0x0) {
    return;
  }
  core_bwgrndma_cpp_CGrandma_ctor_FUN_005a7b10(this_ptr);
  return;
}
