// Name: core_filmreel.cpp_FUN_004bea00
// Address: 004bea00
// Address Range: [[004bea00, 004bea25]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004bea00()

#include "nocturne.h"

void core_filmreel_cpp_FUN_004bea00(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3e4,"..\\core\\filmreel.cpp",0xf3);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_ctor_FUN_004bea40(this_ptr);
  return;
}
