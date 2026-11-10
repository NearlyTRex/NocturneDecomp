// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00492be0
// Address: 00492be0
// Address Range: [[00492be0, 00492bfb]]
// Convention: unknown
// Signature: void core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0(void)

#include "nocturne.h"

void core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0(void)

{
  CFilmProjector *this_ptr;
  
  this_ptr = (CFilmProjector *)debugAllocTracked1(0x540);
  if (this_ptr == (CFilmProjector *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10(this_ptr);
  return;
}
