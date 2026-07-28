// Name: core_filmreel.cpp_FUN_00481c00
// Address: 00481c00
// Address Range: [[00481c00, 00481c1b]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00481c00(void)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00481c00(void)

{
  CFilmReel *this_ptr;
  
  this_ptr = (CFilmReel *)FUN_0056497c(0x314);
  if (this_ptr == (CFilmReel *)0x0) {
    return;
  }
  core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(this_ptr);
  return;
}
