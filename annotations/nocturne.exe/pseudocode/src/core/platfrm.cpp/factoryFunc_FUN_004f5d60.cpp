// Name: core_platfrm.cpp_factoryFunc_FUN_004f5d60
// Address: 004f5d60
// Address Range: [[004f5d60, 004f5d7b]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_004f5d60(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_004f5d60(void)

{
  int iVar1;
  CPlatform *pCVar2;
  
  iVar1 = FUN_0056497c(0x720);
  if (iVar1 == 0) {
    return (CPlatform *)0x0;
  }
  pCVar2 = (CPlatform *)core_platfrm_cpp_FUN_004f5d90(iVar1);
  return pCVar2;
}
