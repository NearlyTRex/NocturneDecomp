// Name: core_gun.cpp_factoryFunc_FUN_004b2730
// Address: 004b2730
// Address Range: [[004b2730, 004b274b]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_factoryFunc_FUN_004b2730(void)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_factoryFunc_FUN_004b2730(void)

{
  CGun *pCVar1;
  
  pCVar1 = operator_new(0x570);
  if (pCVar1 == (CGun *)0x0) {
    return (CGun *)0x0;
  }
  pCVar1 = core_gun_cpp_CGun_ctor_FUN_004b2760(pCVar1);
  return pCVar1;
}
