// Name: core_drone.cpp_FUN_0048eb10
// Address: 0048eb10
// Address Range: [[0048eb10, 0048eb32]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048eb10()

#include "nocturne.h"

void core_drone_cpp_FUN_0048eb10(void)

{
  CDrone *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbed4,"..\\core\\drone.cpp",0x38);
  if (this_ptr == (CDrone *)0x0) {
    return;
  }
  core_drone_cpp_ctor_FUN_0048eb50(this_ptr);
  return;
}
