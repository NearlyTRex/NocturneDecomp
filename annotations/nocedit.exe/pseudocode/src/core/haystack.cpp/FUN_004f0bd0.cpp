// Name: core_haystack.cpp_FUN_004f0bd0
// Address: 004f0bd0
// Address Range: [[004f0bd0, 004f0bf2]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0bd0()

#include "nocturne.h"

void core_haystack_cpp_FUN_004f0bd0(void)

{
  CHaystack *this_ptr;
  
  this_ptr = (CHaystack *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fbec,"..\\core\\haystack.cpp",0x5c);
  if (this_ptr == (CHaystack *)0x0) {
    return;
  }
  core_haystack_cpp_FUN_004f0c10(this_ptr);
  return;
}
