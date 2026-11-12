// Name: core_tommygun.cpp_factoryFuncTommyGun_FUN_00575730
// Address: 00575730
// Address Range: [[00575730, 0057574b]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730(void)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730(void)

{
  CTommyGun *pCVar1;
  
  pCVar1 = (CTommyGun *)operator_new(0x6e0);
  if (pCVar1 == (CTommyGun *)0x0) {
    return (CTommyGun *)0x0;
  }
  pCVar1 = core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(pCVar1);
  return pCVar1;
}
