// Name: core_hero.cpp_FUN_004b5f60
// Address: 004b5f60
// Address Range: [[004b5f60, 004b5f7b]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004b5f60(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004b5f60(void)

{
  CHeroPlaceholder *this_ptr;
  
  this_ptr = (CHeroPlaceholder *)FUN_0056497c(0x154);
  if (this_ptr == (CHeroPlaceholder *)0x0) {
    return;
  }
  core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(this_ptr);
  return;
}
