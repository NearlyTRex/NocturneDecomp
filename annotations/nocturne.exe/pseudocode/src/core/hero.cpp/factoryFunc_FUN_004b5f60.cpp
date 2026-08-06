// Name: core_hero.cpp_factoryFunc_FUN_004b5f60
// Address: 004b5f60
// Address Range: [[004b5f60, 004b5f7b]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004b5f60(void)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004b5f60(void)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = operator_new(0x154);
  if (pCVar1 == (CHeroPlaceholder *)0x0) {
    return (CHeroPlaceholder *)0x0;
  }
  pCVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(pCVar1);
  return pCVar1;
}
