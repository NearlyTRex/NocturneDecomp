// Name: core_hostage.cpp_factoryFuncHostage_FUN_004d12a0
// Address: 004d12a0
// Address Range: [[004d12a0, 004d12bb]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004d12a0(void)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_factoryFuncHostage_FUN_004d12a0(void)

{
  CHostage *pCVar1;
  
  pCVar1 = (CHostage *)operator_new(0x24730);
  if (pCVar1 == (CHostage *)0x0) {
    return (CHostage *)0x0;
  }
  pCVar1 = core_hostage_cpp_CHostage_ctor_FUN_004d12d0(pCVar1);
  return pCVar1;
}
