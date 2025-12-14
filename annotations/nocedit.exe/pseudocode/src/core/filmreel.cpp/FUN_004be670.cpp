// Name: core_filmreel.cpp_FUN_004be670
// Address: 004be670
// Address Range: [[004be670, 004be692]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be670()

#include "nocturne.h"

void core_filmreel_cpp_FUN_004be670(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\filmreel.cpp",0x22);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_ctor_FUN_004be6b0(this_ptr);
  return;
}
