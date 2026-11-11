// Name: core_gasmask.cpp_factoryFuncGasMask_FUN_004c1310
// Address: 004c1310
// Address Range: [[004c1310, 004c132b]]
// Convention: unknown
// Signature: void core_gasmask_cpp_factoryFuncGasMask_FUN_004c1310(void)

#include "nocturne.h"

void core_gasmask_cpp_factoryFuncGasMask_FUN_004c1310(void)

{
  CGasMask *this_ptr;
  
  this_ptr = (CGasMask *)operator_new(0x434);
  if (this_ptr == (CGasMask *)0x0) {
    return;
  }
  core_gasmask_cpp_CGasMask_ctor_FUN_004c1340(this_ptr);
  return;
}
