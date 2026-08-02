// Name: core_scat.cpp_factoryFunc_FUN_004fbbd0
// Address: 004fbbd0
// Address Range: [[004fbbd0, 004fbbeb]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_factoryFunc_FUN_004fbbd0(void)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_factoryFunc_FUN_004fbbd0(void)

{
  CScat *pCVar1;
  
  pCVar1 = (CScat *)FUN_0056497c(0x1fa68);
  if (pCVar1 == (CScat *)0x0) {
    return (CScat *)0x0;
  }
  pCVar1 = core_scat_cpp_CScat_ctor_FUN_004fbc00(pCVar1);
  return pCVar1;
}
