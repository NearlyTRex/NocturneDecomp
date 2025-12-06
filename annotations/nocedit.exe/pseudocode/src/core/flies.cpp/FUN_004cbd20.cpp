// Name: core_flies.cpp_FUN_004cbd20
// Address: 004cbd20
// Address Range: [[004cbd20, 004cbd42]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbd20()

#include "nocturne.h"

void core_flies_cpp_FUN_004cbd20(void)

{
  CFlies *this_ptr;
  
  this_ptr = (CFlies *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a20,"..\\core\\flies.cpp",0x19);
  if (this_ptr == (CFlies *)0x0) {
    return;
  }
  core_flies_cpp_FUN_004cbd60(this_ptr);
  return;
}
