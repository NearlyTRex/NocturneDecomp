// Name: core_pryemorp.cpp_factoryFuncPryeMorph_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 0052739b]]
// Convention: __cdecl
// Signature: CPryeMorph * __cdecl core_pryemorp_cpp_factoryFuncPryeMorph_FUN_00527380(void)

#include "nocturne.h"

CPryeMorph * __cdecl core_pryemorp_cpp_factoryFuncPryeMorph_FUN_00527380(void)

{
  CPryeMorph *pCVar1;
  
  pCVar1 = (CPryeMorph *)operator_new(0x21448);
  if (pCVar1 == (CPryeMorph *)0x0) {
    return (CPryeMorph *)0x0;
  }
  pCVar1 = core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(pCVar1);
  return pCVar1;
}
