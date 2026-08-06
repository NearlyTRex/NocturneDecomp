// Name: core_lightgun.cpp_factoryFunc_FUN_004c6e00
// Address: 004c6e00
// Address Range: [[004c6e00, 004c6e1b]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_factoryFunc_FUN_004c6e00(void)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_factoryFunc_FUN_004c6e00(void)

{
  CLightGun *pCVar1;
  
  pCVar1 = operator_new(0x588);
  if (pCVar1 == (CLightGun *)0x0) {
    return (CLightGun *)0x0;
  }
  pCVar1 = core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(pCVar1);
  return pCVar1;
}
