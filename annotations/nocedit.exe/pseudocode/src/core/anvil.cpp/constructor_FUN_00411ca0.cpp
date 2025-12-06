// Name: core_anvil.cpp_constructor_FUN_00411ca0
// Address: 00411ca0
// Address Range: [[00411ca0, 00411cc2]]
// Convention: unknown
// Signature: undefined core_anvil.cpp_constructor_FUN_00411ca0()

#include "nocturne.h"

void core_anvil_cpp_constructor_FUN_00411ca0(void)

{
  CAnvil *this_ptr;
  
  this_ptr = (CAnvil *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x344,"..\\core\\anvil.cpp",0x20);
  if (this_ptr == (CAnvil *)0x0) {
    return;
  }
  core_anvil_cpp_CAnvil_ctor_FUN_00411ce0(this_ptr);
  return;
}
