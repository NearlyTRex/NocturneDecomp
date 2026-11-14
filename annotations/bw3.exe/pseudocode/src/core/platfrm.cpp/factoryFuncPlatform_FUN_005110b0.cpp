// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_005110b0
// Address: 005110b0
// Address Range: [[005110b0, 005110cb]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)operator_new(0x728);
  if (pCVar1 == (CPlatform *)0x0) {
    return (CPlatform *)0x0;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_005110e0(pCVar1);
  return pCVar1;
}
