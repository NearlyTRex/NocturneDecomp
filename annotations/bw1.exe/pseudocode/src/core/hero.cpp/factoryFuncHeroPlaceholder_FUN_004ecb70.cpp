// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004ecb70
// Address: 004ecb70
// Address Range: [[004ecb70, 004ecb8b]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70(void)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004ecb70(void)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)operator_new(0x17c);
  if (pCVar1 == (CHeroPlaceholder *)0x0) {
    return (CHeroPlaceholder *)0x0;
  }
  pCVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0(pCVar1);
  return pCVar1;
}
