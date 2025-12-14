// Name: core_batcreat.cpp_constructor_FUN_004150b0
// Address: 004150b0
// Address Range: [[004150b0, 004150d2]]
// Convention: unknown
// Signature: undefined core_batcreat.cpp_constructor_FUN_004150b0()

#include "nocturne.h"

void core_batcreat_cpp_constructor_FUN_004150b0(void)

{
  CBatCreature *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf04,"..\\core\\batcreat.cpp",0x4d);
  if (this_ptr == (CBatCreature *)0x0) {
    return;
  }
  core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(this_ptr);
  return;
}
