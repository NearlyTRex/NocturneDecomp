// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004d0910
// Address: 004d0910
// Address Range: [[004d0910, 004d092b]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d0910(void)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d0910(void)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)operator_new(0x2d8);
  if (pCVar1 == (CHeroPlaceholder *)0x0) {
    return (CHeroPlaceholder *)0x0;
  }
  pCVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(pCVar1);
  return pCVar1;
}
