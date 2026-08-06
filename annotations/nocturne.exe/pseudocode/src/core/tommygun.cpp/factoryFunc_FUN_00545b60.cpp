// Name: core_tommygun.cpp_factoryFunc_FUN_00545b60
// Address: 00545b60
// Address Range: [[00545b60, 00545b7b]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_factoryFunc_FUN_00545b60(void)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_factoryFunc_FUN_00545b60(void)

{
  CTommyGun *pCVar1;
  
  pCVar1 = operator_new(0x57c);
  if (pCVar1 == (CTommyGun *)0x0) {
    return (CTommyGun *)0x0;
  }
  pCVar1 = core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(pCVar1);
  return pCVar1;
}
