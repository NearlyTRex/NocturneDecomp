// Name: core_stranger.cpp_factoryFuncStranger_FUN_005627c0
// Address: 005627c0
// Address Range: [[005627c0, 005627db]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_factoryFuncStranger_FUN_005627c0(void)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_factoryFuncStranger_FUN_005627c0(void)

{
  CStranger *pCVar1;
  
  pCVar1 = (CStranger *)operator_new(0x258dc);
  if (pCVar1 == (CStranger *)0x0) {
    return (CStranger *)0x0;
  }
  pCVar1 = core_stranger_cpp_CStranger_ctor_FUN_005627f0(pCVar1);
  return pCVar1;
}
