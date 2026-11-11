// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004ecb70
// Address: 004ecb70
// Address Range: [[004ecb70, 004ecb8b]]
// Convention: unknown
// Signature: void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70(void)

#include "nocturne.h"

void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70(void)

{
  CHeroPlaceholder *this_ptr;
  
  this_ptr = (CHeroPlaceholder *)operator_new(0x17c);
  if (this_ptr == (CHeroPlaceholder *)0x0) {
    return;
  }
  core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0(this_ptr);
  return;
}
