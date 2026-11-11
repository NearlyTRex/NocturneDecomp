// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004d0910
// Address: 004d0910
// Address Range: [[004d0910, 004d092b]]
// Convention: unknown
// Signature: void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d0910(void)

#include "nocturne.h"

void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d0910(void)

{
  CHeroPlaceholder *this_ptr;
  
  this_ptr = (CHeroPlaceholder *)operator_new(0x2d8);
  if (this_ptr == (CHeroPlaceholder *)0x0) {
    return;
  }
  core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(this_ptr);
  return;
}
