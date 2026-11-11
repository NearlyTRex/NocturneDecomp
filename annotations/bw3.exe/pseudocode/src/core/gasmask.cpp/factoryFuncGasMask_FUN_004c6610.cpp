// Name: core_gasmask.cpp_factoryFuncGasMask_FUN_004c6610
// Address: 004c6610
// Address Range: [[004c6610, 004c662b]]
// Convention: unknown
// Signature: void core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610(void)

#include "nocturne.h"

void core_gasmask_cpp_factoryFuncGasMask_FUN_004c6610(void)

{
  CGasMask *this_ptr;
  
  this_ptr = (CGasMask *)operator_new(0x2d8);
  if (this_ptr == (CGasMask *)0x0) {
    return;
  }
  core_gasmask_cpp_CGasMask_ctor_FUN_004c6640(this_ptr);
  return;
}
