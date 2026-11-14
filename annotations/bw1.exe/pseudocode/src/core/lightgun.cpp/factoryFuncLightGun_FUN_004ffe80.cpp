// Name: core_lightgun.cpp_factoryFuncLightGun_FUN_004ffe80
// Address: 004ffe80
// Address Range: [[004ffe80, 004ffe9b]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80(void)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80(void)

{
  CLightGun *pCVar1;
  
  pCVar1 = (CLightGun *)operator_new(0x598);
  if (pCVar1 == (CLightGun *)0x0) {
    return (CLightGun *)0x0;
  }
  pCVar1 = core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0(pCVar1);
  return pCVar1;
}
