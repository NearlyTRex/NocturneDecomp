// Name: core_platfrm.cpp_factoryFunc_FUN_004f5d60
// Address: 004f5d60
// Address Range: [[004f5d60, 004f5d7b]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_004f5d60(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_004f5d60(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = operator_new(0x720);
  if (pCVar1 == (CPlatform *)0x0) {
    return (CPlatform *)0x0;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_004f5d90(pCVar1);
  return pCVar1;
}
