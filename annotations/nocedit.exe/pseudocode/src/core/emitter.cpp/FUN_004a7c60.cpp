// Name: core_emitter.cpp_FUN_004a7c60
// Address: 004a7c60
// Address Range: [[004a7c60, 004a7c82]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a7c60()

#include "nocturne.h"

void core_emitter_cpp_FUN_004a7c60(void)

{
  CEmitter *this_ptr;
  
  this_ptr = (CEmitter *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x494,"..\\core\\emitter.cpp",0x3a);
  if (this_ptr == (CEmitter *)0x0) {
    return;
  }
  core_emitter_cpp_ctor_FUN_004a7ca0(this_ptr);
  return;
}
