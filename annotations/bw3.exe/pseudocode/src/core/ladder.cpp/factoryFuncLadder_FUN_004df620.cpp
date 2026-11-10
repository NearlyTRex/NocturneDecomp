// Name: core_ladder.cpp_factoryFuncLadder_FUN_004df620
// Address: 004df620
// Address Range: [[004df620, 004df63b]]
// Convention: unknown
// Signature: void core_ladder_cpp_factoryFuncLadder_FUN_004df620(void)

#include "nocturne.h"

void core_ladder_cpp_factoryFuncLadder_FUN_004df620(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)debugAllocTracked1(0x300);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_CLadder_ctor_FUN_004df650(this_ptr);
  return;
}
