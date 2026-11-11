// Name: core_gasmask.cpp_factoryFuncGasMask_FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004ddaab]]
// Convention: unknown
// Signature: void core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90(void)

#include "nocturne.h"

void core_gasmask_cpp_factoryFuncGasMask_FUN_004dda90(void)

{
  CGasMask *this_ptr;
  
  this_ptr = (CGasMask *)operator_new(0x2d8);
  if (this_ptr == (CGasMask *)0x0) {
    return;
  }
  core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0(this_ptr);
  return;
}
