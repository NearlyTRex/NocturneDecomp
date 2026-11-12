// Name: core_gun.cpp_factoryFuncGun_FUN_004e85a0
// Address: 004e85a0
// Address Range: [[004e85a0, 004e85bb]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004e85a0(void)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_factoryFuncGun_FUN_004e85a0(void)

{
  CGun *pCVar1;
  
  pCVar1 = (CGun *)operator_new(0x578);
  if (pCVar1 == (CGun *)0x0) {
    return (CGun *)0x0;
  }
  pCVar1 = core_gun_cpp_CGun_ctor_FUN_004e85d0(pCVar1);
  return pCVar1;
}
