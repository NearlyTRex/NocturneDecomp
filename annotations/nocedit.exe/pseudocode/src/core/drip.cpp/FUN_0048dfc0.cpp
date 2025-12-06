// Name: core_drip.cpp_FUN_0048dfc0
// Address: 0048dfc0
// Address Range: [[0048dfc0, 0048dfe2]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048dfc0()

#include "nocturne.h"

void core_drip_cpp_FUN_0048dfc0(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x33c,"..\\core\\drip.cpp",0x32);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_ctor_FUN_0048e000(this_ptr);
  return;
}
