// Name: core_grave.cpp_FUN_004ee4d0
// Address: 004ee4d0
// Address Range: [[004ee4d0, 004ee4f2]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee4d0()

#include "nocturne.h"

void core_grave_cpp_FUN_004ee4d0(void)

{
  CGrave *this_ptr;
  
  this_ptr = (CGrave *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3b0,"..\\core\\grave.cpp",0x26);
  if (this_ptr == (CGrave *)0x0) {
    return;
  }
  core_grave_cpp_FUN_004ee510(this_ptr);
  return;
}
