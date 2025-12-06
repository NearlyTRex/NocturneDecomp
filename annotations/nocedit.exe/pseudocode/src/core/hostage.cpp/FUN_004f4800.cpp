// Name: core_hostage.cpp_FUN_004f4800
// Address: 004f4800
// Address Range: [[004f4800, 004f4822]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f4800()

#include "nocturne.h"

void core_hostage_cpp_FUN_004f4800(void)

{
  CHostage *this_ptr;
  
  this_ptr = (CHostage *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1faf0,"..\\core\\hostage.cpp",0x59);
  if (this_ptr == (CHostage *)0x0) {
    return;
  }
  core_hostage_cpp_FUN_004f4840(this_ptr);
  return;
}
