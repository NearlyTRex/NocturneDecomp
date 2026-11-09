// Name: core_ladder.cpp_factoryFuncLadder_FUN_004dff30
// Address: 004dff30
// Address Range: [[004dff30, 004dff4b]]
// Convention: unknown
// Signature: void core_ladder_cpp_factoryFuncLadder_FUN_004dff30(void)

#include "nocturne.h"

void core_ladder_cpp_factoryFuncLadder_FUN_004dff30(void)

{
  CLadder *this_ptr;
  
  this_ptr = (CLadder *)FUN_005b8be2(0x45c);
  if (this_ptr == (CLadder *)0x0) {
    return;
  }
  core_ladder_cpp_CLadder_ctor_FUN_004dff60(this_ptr);
  return;
}
