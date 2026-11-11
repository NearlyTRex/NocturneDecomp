// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_004ab2a0
// Address: 004ab2a0
// Address Range: [[004ab2a0, 004ab2bb]]
// Convention: unknown
// Signature: void core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0(void)

#include "nocturne.h"

void core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = (CFilmReel *)operator_new(0x31c);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmReel_ctor_FUN_004ab2d0(this_ptr);
  return;
}
