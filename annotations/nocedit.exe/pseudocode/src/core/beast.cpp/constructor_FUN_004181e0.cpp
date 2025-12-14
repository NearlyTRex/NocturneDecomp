// Name: core_beast.cpp_constructor_FUN_004181e0
// Address: 004181e0
// Address Range: [[004181e0, 00418202]]
// Convention: unknown
// Signature: undefined core_beast.cpp_constructor_FUN_004181e0()

#include "nocturne.h"

void core_beast_cpp_constructor_FUN_004181e0(void)

{
  CBeast *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbebc,"..\\core\\beast.cpp",0x2d);
  if (this_ptr == (CBeast *)0x0) {
    return;
  }
  core_beast_cpp_CBeast_ctor_FUN_00418220(this_ptr);
  return;
}
