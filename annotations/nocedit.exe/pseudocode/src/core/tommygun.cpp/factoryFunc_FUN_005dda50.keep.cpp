// Name: core_tommygun.cpp_factoryFunc_FUN_005dda50
// Address: 005dda50
// MANUAL RECONSTRUCTION
// Address Range: [[005dda50, 005dda72]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_factoryFunc_FUN_005dda50(void)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_factoryFunc_FUN_005dda50(void)

{
  CTommyGun *pCVar1;
  
  pCVar1 = (CTommyGun *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CTommyGun),"..\\core\\tommygun.cpp",0x2f)
  ;
  if (pCVar1 == (CTommyGun *)0x0) {
    return (CTommyGun *)0x0;
  }
  pCVar1 = core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90(pCVar1);
  return pCVar1;
}
