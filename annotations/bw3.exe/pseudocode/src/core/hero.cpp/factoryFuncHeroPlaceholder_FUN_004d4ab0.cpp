// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0
// Address: 004d4ab0
// Address Range: [[004d4ab0, 004d4acb]]
// Convention: unknown
// Signature: void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0(void)

#include "nocturne.h"

void core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0(void)

{
  CHeroPlaceholder *this_ptr;
  
  this_ptr = (CHeroPlaceholder *)debugAllocTracked1(0x17c);
  if (this_ptr == (CHeroPlaceholder *)0x0) {
    return;
  }
  core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(this_ptr);
  return;
}
