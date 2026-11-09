// Name: core_emitter.cpp_factoryFuncEmitter_FUN_004879b0
// Address: 004879b0
// Address Range: [[004879b0, 004879cb]]
// Convention: unknown
// Signature: void core_emitter_cpp_factoryFuncEmitter_FUN_004879b0(void)

#include "nocturne.h"

void core_emitter_cpp_factoryFuncEmitter_FUN_004879b0(void)

{
  CEmitter *this_ptr;
  
  this_ptr = (CEmitter *)FUN_005a3cb2(0x4c0);
  if (this_ptr == (CEmitter *)0x0) {
    return;
  }
  core_emitter_cpp_CEmitter_ctor_FUN_004879e0(this_ptr);
  return;
}
