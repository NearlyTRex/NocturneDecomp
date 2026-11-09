// Name: core_filmreel.cpp_FUN_00496430
// Address: 00496430
// Address Range: [[00496430, 0049644b]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00496430(void)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00496430(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = (CFilmProjector *)FUN_005a3cb2(0x3e4);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmProjector_ctor_FUN_00496460(this_ptr);
  return;
}
