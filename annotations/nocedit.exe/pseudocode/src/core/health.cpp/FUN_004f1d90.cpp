// Name: core_health.cpp_FUN_004f1d90
// Address: 004f1d90
// Address Range: [[004f1d90, 004f1db2]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1d90()

#include "nocturne.h"

void core_health_cpp_FUN_004f1d90(void)

{
  CHealthItem *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2dc,"..\\core\\health.cpp",0x22);
  if (this_ptr == (CHealthItem *)0x0) {
    return;
  }
  core_health_cpp_FUN_004f1dd0(this_ptr);
  return;
}
