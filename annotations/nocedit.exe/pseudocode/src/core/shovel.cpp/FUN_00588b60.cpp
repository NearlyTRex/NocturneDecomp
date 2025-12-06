// Name: core_shovel.cpp_FUN_00588b60
// Address: 00588b60
// Address Range: [[00588b60, 00588b82]]
// Convention: unknown
// Signature: undefined core_shovel.cpp_FUN_00588b60()

#include "nocturne.h"

void core_shovel_cpp_FUN_00588b60(void)

{
  CShovel *this_ptr;
  
  this_ptr = (CShovel *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\shovel.cpp",0x20);
  if (this_ptr == (CShovel *)0x0) {
    return;
  }
  core_shovel_cpp_CShovel_ctor_FUN_00588ba0(this_ptr);
  return;
}
