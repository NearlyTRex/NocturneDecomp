// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_005393d0
// Address: 005393d0
// Address Range: [[005393d0, 005393eb]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)operator_new(0x728);
  if (pCVar1 == (CPlatform *)0x0) {
    return (CPlatform *)0x0;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_00539400(pCVar1);
  return pCVar1;
}
