// Name: core_hostage.cpp_factoryFunc_FUN_004b69c0
// Address: 004b69c0
// Address Range: [[004b69c0, 004b69db]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004b69c0(void)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004b69c0(void)

{
  CHostage *pCVar1;
  
  pCVar1 = (CHostage *)FUN_0056497c(0x1f958);
  if (pCVar1 == (CHostage *)0x0) {
    return (CHostage *)0x0;
  }
  pCVar1 = core_hostage_cpp_CHostage_ctor_FUN_004b69f0(pCVar1);
  return pCVar1;
}
