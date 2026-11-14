// Name: core_tommygun.cpp_factoryFuncTommyGun_FUN_00598350
// Address: 00598350
// Address Range: [[00598350, 0059836b]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350(void)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350(void)

{
  CTommyGun *pCVar1;
  
  pCVar1 = (CTommyGun *)operator_new(0x584);
  if (pCVar1 == (CTommyGun *)0x0) {
    return (CTommyGun *)0x0;
  }
  pCVar1 = core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(pCVar1);
  return pCVar1;
}
