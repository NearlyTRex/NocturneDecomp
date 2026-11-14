// Name: core_fforest.cpp_factoryFuncTwigZombie_FUN_005a26a0
// Address: 005a26a0
// Address Range: [[005a26a0, 005a26bb]]
// Convention: __cdecl
// Signature: CTwigZombie * __cdecl core_fforest_cpp_factoryFuncTwigZombie_FUN_005a26a0(void)

#include "nocturne.h"

CTwigZombie * __cdecl core_fforest_cpp_factoryFuncTwigZombie_FUN_005a26a0(void)

{
  CTwigZombie *pCVar1;
  
  pCVar1 = (CTwigZombie *)operator_new(0x11858);
  if (pCVar1 == (CTwigZombie *)0x0) {
    return (CTwigZombie *)0x0;
  }
  pCVar1 = core_fforest_cpp_CTwigZombie_ctor_FUN_005a26d0(pCVar1);
  return pCVar1;
}
