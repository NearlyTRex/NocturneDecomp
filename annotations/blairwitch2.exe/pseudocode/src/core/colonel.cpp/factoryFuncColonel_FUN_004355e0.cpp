// Name: core_colonel.cpp_factoryFuncColonel_FUN_004355e0
// Address: 004355e0
// Address Range: [[004355e0, 004355fb]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_004355e0(void)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_004355e0(void)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)operator_new(0x25658);
  if (pCVar1 == (CColonel *)0x0) {
    return (CColonel *)0x0;
  }
  pCVar1 = core_colonel_cpp_CColonel_ctor_FUN_00435610(pCVar1);
  return pCVar1;
}
