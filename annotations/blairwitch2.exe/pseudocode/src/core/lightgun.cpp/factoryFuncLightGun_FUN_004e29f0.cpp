// Name: core_lightgun.cpp_factoryFuncLightGun_FUN_004e29f0
// Address: 004e29f0
// Address Range: [[004e29f0, 004e2a0b]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0(void)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0(void)

{
  CLightGun *pCVar1;
  
  pCVar1 = (CLightGun *)operator_new(0x6f4);
  if (pCVar1 == (CLightGun *)0x0) {
    return (CLightGun *)0x0;
  }
  pCVar1 = core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20(pCVar1);
  return pCVar1;
}
