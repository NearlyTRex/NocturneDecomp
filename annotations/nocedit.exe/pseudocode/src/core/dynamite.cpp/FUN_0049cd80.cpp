// Name: core_dynamite.cpp_FUN_0049cd80
// Address: 0049cd80
// Address Range: [[0049cd80, 0049cda2]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cd80()

#include "nocturne.h"

void core_dynamite_cpp_FUN_0049cd80(void)

{
  CDynamite *this_ptr;
  
  this_ptr = (CDynamite *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x58c,"..\\core\\dynamite.cpp",0x21);
  if (this_ptr == (CDynamite *)0x0) {
    return;
  }
  core_dynamite_cpp_ctor_FUN_0049cdc0(this_ptr);
  return;
}
