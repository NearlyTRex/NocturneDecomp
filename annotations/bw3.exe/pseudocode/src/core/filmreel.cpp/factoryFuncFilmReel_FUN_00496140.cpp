// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_00496140
// Address: 00496140
// Address Range: [[00496140, 0049615b]]
// Convention: unknown
// Signature: void core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140(void)

#include "nocturne.h"

void core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = (CFilmReel *)operator_new(0x31c);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmReel_ctor_FUN_00496170(this_ptr);
  return;
}
