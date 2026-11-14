// Name: core_hostage.cpp_factoryFuncHostage_FUN_004ed4d0
// Address: 004ed4d0
// Address Range: [[004ed4d0, 004ed4eb]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0(void)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0(void)

{
  CHostage *pCVar1;
  
  pCVar1 = (CHostage *)operator_new(0x1fea0);
  if (pCVar1 == (CHostage *)0x0) {
    return (CHostage *)0x0;
  }
  pCVar1 = core_hostage_cpp_CHostage_ctor_FUN_004ed500(pCVar1);
  return pCVar1;
}
