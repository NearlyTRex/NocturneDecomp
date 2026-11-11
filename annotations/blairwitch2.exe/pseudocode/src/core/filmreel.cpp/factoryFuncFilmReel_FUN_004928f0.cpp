// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_004928f0
// Address: 004928f0
// Address Range: [[004928f0, 0049290b]]
// Convention: unknown
// Signature: void core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0(void)

#include "nocturne.h"

void core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = (CFilmReel *)operator_new(0x478);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmReel_ctor_FUN_00492920(this_ptr);
  return;
}
