// Name: core_ladder.cpp_factoryFuncLadder_FUN_004fd300
// Address: 004fd300
// Address Range: [[004fd300, 004fd31b]]
// Convention: unknown
// Signature: void core_ladder_cpp_factoryFuncLadder_FUN_004fd300(void)

#include "nocturne.h"

void core_ladder_cpp_factoryFuncLadder_FUN_004fd300(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)debugAllocTracked1(0x300);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_CLadder_ctor_FUN_004fd330(this_ptr);
  return;
}
