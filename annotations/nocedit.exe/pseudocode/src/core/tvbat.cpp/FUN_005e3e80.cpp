// Name: core_tvbat.cpp_FUN_005e3e80
// Address: 005e3e80
// Address Range: [[005e3e80, 005e3ea2]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e3e80()

#include "nocturne.h"

void core_tvbat_cpp_FUN_005e3e80(void)

{
  CTVBat *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc0f4,"..\\core\\tvbat.cpp",0x39);
  if (this_ptr == (CTVBat *)0x0) {
    return;
  }
  core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(this_ptr);
  return;
}
