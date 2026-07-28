// Name: core_filmreel.cpp_FUN_00481ee0
// Address: 00481ee0
// Address Range: [[00481ee0, 00481efb]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00481ee0(void)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00481ee0(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = (CFilmProjector *)FUN_0056497c(0x3dc);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10(this_ptr);
  return;
}
