// Name: core_hero.cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0
// Address: 004d4ab0
// Address Range: [[004d4ab0, 004d4acb]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0(void)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_factoryFuncHeroPlaceholder_FUN_004d4ab0(void)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)operator_new(0x17c);
  if (pCVar1 == (CHeroPlaceholder *)0x0) {
    return (CHeroPlaceholder *)0x0;
  }
  pCVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(pCVar1);
  return pCVar1;
}
