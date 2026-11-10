// Name: core_curtain.cpp_factoryFuncCrossbow_FUN_0043a490
// Address: 0043a490
// Address Range: [[0043a490, 0043a4ab]]
// Convention: unknown
// Signature: void core_curtain_cpp_factoryFuncCrossbow_FUN_0043a490(void)

#include "nocturne.h"

void core_curtain_cpp_factoryFuncCrossbow_FUN_0043a490(void)

{
  CCrossbow *this_ptr;
  
  this_ptr = (CCrossbow *)debugAllocTracked1(0xad8);
  if (this_ptr == (CCrossbow *)0x0) {
    return;
  }
  core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(this_ptr);
  return;
}
