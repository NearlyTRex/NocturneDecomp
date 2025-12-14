// Name: core_crossbow.cpp_FUN_00448c30
// Address: 00448c30
// Address Range: [[00448c30, 00448c52]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00448c30()

#include "nocturne.h"

void core_crossbow_cpp_FUN_00448c30(void)

{
  CCrossbow *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x820,"..\\core\\crossbow.cpp",0x2f);
  if (this_ptr == (CCrossbow *)0x0) {
    return;
  }
  core_crossbow_cpp_FUN_00448c70(this_ptr);
  return;
}
