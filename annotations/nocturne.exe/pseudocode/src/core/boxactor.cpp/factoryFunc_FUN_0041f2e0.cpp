// Name: core_boxactor.cpp_factoryFunc_FUN_0041f2e0
// Address: 0041f2e0
// Address Range: [[0041f2e0, 0041f2fb]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041f2e0(void)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_0041f2e0(void)

{
  CLightActor *pCVar1;
  
  pCVar1 = operator_new(0x3670);
  if (pCVar1 == (CLightActor *)0x0) {
    return (CLightActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CLightActor_ctor_FUN_0041f310(pCVar1);
  return pCVar1;
}
