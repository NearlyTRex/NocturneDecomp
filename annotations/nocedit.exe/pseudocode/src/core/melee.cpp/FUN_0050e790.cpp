// Name: core_melee.cpp_FUN_0050e790
// Address: 0050e790
// Address Range: [[0050e790, 0050e7b2]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050e790()

#include "nocturne.h"

void core_melee_cpp_FUN_0050e790(void)

{
  CMelee *this_ptr;
  
  this_ptr = (CMelee *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x6cc,"..\\core\\melee.cpp",0x26);
  if (this_ptr == (CMelee *)0x0) {
    return;
  }
  core_melee_cpp_FUN_0050e7d0(this_ptr);
  return;
}
