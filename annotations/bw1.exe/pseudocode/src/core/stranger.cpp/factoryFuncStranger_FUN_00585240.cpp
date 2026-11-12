// Name: core_stranger.cpp_factoryFuncStranger_FUN_00585240
// Address: 00585240
// Address Range: [[00585240, 0058525b]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_factoryFuncStranger_FUN_00585240(void)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_factoryFuncStranger_FUN_00585240(void)

{
  CStranger *pCVar1;
  
  pCVar1 = (CStranger *)operator_new(0x20244);
  if (pCVar1 == (CStranger *)0x0) {
    return (CStranger *)0x0;
  }
  pCVar1 = core_stranger_cpp_CStranger_ctor_FUN_00585270(pCVar1);
  return pCVar1;
}
