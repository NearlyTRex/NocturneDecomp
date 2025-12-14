// Name: core_boneguy.cpp_constructor_FUN_0041b820
// Address: 0041b820
// Address Range: [[0041b820, 0041b842]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_constructor_FUN_0041b820()

#include "nocturne.h"

void core_boneguy_cpp_constructor_FUN_0041b820(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc4e4,"..\\core\\boneguy.cpp",0x74);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(this_ptr);
  return;
}
