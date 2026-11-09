// Name: core_emitter.cpp_factoryFuncEmitter_FUN_004867b0
// Address: 004867b0
// Address Range: [[004867b0, 004867cb]]
// Convention: unknown
// Signature: void core_emitter_cpp_factoryFuncEmitter_FUN_004867b0(void)

#include "nocturne.h"

void core_emitter_cpp_factoryFuncEmitter_FUN_004867b0(void)

{
  CEmitter *this_ptr;
  
  this_ptr = (CEmitter *)FUN_005b8be2(0x61c);
  if (this_ptr == (CEmitter *)0x0) {
    return;
  }
  core_emitter_cpp_CEmitter_ctor_FUN_004867e0(this_ptr);
  return;
}
