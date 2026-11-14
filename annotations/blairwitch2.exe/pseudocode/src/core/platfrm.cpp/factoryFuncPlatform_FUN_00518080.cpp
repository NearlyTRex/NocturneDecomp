// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_00518080
// Address: 00518080
// Address Range: [[00518080, 0051809b]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_00518080(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_00518080(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)operator_new(0x884);
  if (pCVar1 == (CPlatform *)0x0) {
    return (CPlatform *)0x0;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(pCVar1);
  return pCVar1;
}
