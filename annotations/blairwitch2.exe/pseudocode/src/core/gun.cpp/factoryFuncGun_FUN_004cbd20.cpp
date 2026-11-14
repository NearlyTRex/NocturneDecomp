// Name: core_gun.cpp_factoryFuncGun_FUN_004cbd20
// Address: 004cbd20
// Address Range: [[004cbd20, 004cbd3b]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004cbd20(void)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004cbd20(void)

{
  CGun *pCVar1;
  
  pCVar1 = (CGun *)operator_new(0x6d4);
  if (pCVar1 == (CGun *)0x0) {
    return (CGun *)0x0;
  }
  pCVar1 = core_gun_cpp_CGun_ctor_FUN_004cbd50(pCVar1);
  return pCVar1;
}
