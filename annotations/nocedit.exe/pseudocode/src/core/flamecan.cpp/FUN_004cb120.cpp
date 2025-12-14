// Name: core_flamecan.cpp_FUN_004cb120
// Address: 004cb120
// Address Range: [[004cb120, 004cb142]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb120()

#include "nocturne.h"

void core_flamecan_cpp_FUN_004cb120(void)

{
  CFlameCan *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x5e8,"..\\core\\flamecan.cpp",0x22);
  if (this_ptr == (CFlameCan *)0x0) {
    return;
  }
  core_flamecan_cpp_FUN_004cb160(this_ptr);
  return;
}
