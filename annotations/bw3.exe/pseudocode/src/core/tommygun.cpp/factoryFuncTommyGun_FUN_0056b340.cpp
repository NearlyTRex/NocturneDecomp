// Name: core_tommygun.cpp_factoryFuncTommyGun_FUN_0056b340
// Address: 0056b340
// Address Range: [[0056b340, 0056b35b]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_0056b340(void)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_0056b340(void)

{
  CTommyGun *pCVar1;
  
  pCVar1 = (CTommyGun *)operator_new(0x5a0);
  if (pCVar1 == (CTommyGun *)0x0) {
    return (CTommyGun *)0x0;
  }
  pCVar1 = core_tommygun_cpp_CTommyGun_ctor_FUN_0056b370(pCVar1);
  return pCVar1;
}
