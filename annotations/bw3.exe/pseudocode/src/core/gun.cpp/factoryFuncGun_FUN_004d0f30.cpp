// Name: core_gun.cpp_factoryFuncGun_FUN_004d0f30
// Address: 004d0f30
// Address Range: [[004d0f30, 004d0f4b]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004d0f30(void)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004d0f30(void)

{
  CGun *pCVar1;
  
  pCVar1 = (CGun *)operator_new(0x594);
  if (pCVar1 == (CGun *)0x0) {
    return (CGun *)0x0;
  }
  pCVar1 = core_gun_cpp_CGun_ctor_FUN_004d0f60(pCVar1);
  return pCVar1;
}
