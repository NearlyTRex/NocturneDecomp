// Name: core_armour.cpp_constructor_FUN_00412160
// Address: 00412160
// Address Range: [[00412160, 00412182]]
// Convention: unknown
// Signature: undefined core_armour.cpp_constructor_FUN_00412160()

#include "nocturne.h"

void core_armour_cpp_constructor_FUN_00412160(void)

{
  CArmour *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf20,"..\\core\\armour.cpp",0x2f);
  if (this_ptr == (CArmour *)0x0) {
    return;
  }
  core_armour_cpp_CArmour_ctor_FUN_004121a0(this_ptr);
  return;
}
