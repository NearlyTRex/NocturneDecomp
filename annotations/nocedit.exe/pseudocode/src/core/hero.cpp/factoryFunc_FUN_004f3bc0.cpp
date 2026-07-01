// Name: core_hero.cpp_factoryFunc_FUN_004f3bc0
// Address: 004f3bc0
// Address Range: [[004f3bc0, 004f3be5]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004f3bc0(void)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_factoryFunc_FUN_004f3bc0(void)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x15c,"..\\core\\hero.cpp",1319);
  if (pCVar1 == (CHeroPlaceholder *)0x0) {
    return (CHeroPlaceholder *)0x0;
  }
  pCVar1 = core_hero_cpp_CHeroPlaceholder_ctor_FUN_004f3c00(pCVar1);
  return pCVar1;
}
