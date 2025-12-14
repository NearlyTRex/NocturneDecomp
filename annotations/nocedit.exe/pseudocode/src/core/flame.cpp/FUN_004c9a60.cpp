// Name: core_flame.cpp_FUN_004c9a60
// Address: 004c9a60
// Address Range: [[004c9a60, 004c9a82]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9a60()

#include "nocturne.h"

void core_flame_cpp_FUN_004c9a60(void)

{
  CFlame *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a4,"..\\core\\flame.cpp",0x75);
  if (this_ptr == (CFlame *)0x0) {
    return;
  }
  core_flame_cpp_CFlame_ctor_FUN_004c9aa0(this_ptr);
  return;
}
