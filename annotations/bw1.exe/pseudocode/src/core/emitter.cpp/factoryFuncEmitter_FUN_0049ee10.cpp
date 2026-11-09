// Name: core_emitter.cpp_factoryFuncEmitter_FUN_0049ee10
// Address: 0049ee10
// Address Range: [[0049ee10, 0049ee2b]]
// Convention: unknown
// Signature: void core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10(void)

#include "nocturne.h"

void core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10(void)

{
  CEmitter *this_ptr;
  
  this_ptr = (CEmitter *)FUN_005c0f32(0x4c0);
  if (this_ptr == (CEmitter *)0x0) {
    return;
  }
  core_emitter_cpp_CEmitter_ctor_FUN_0049ee40(this_ptr);
  return;
}
