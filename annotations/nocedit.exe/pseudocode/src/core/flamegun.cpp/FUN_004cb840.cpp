// Name: core_flamegun.cpp_FUN_004cb840
// Address: 004cb840
// Address Range: [[004cb840, 004cb862]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb840()

#include "nocturne.h"

void core_flamegun_cpp_FUN_004cb840(void)

{
  CFlameThrower *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x588,"..\\core\\flamegun.cpp",0x2a);
  if (this_ptr == (CFlameThrower *)0x0) {
    return;
  }
  core_flamegun_cpp_FUN_004cb880(this_ptr);
  return;
}
