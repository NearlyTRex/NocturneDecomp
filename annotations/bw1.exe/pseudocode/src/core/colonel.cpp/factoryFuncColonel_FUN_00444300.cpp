// Name: core_colonel.cpp_factoryFuncColonel_FUN_00444300
// Address: 00444300
// Address Range: [[00444300, 0044431b]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_00444300(void)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_factoryFuncColonel_FUN_00444300(void)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)operator_new(0x1ffc4);
  if (pCVar1 == (CColonel *)0x0) {
    return (CColonel *)0x0;
  }
  pCVar1 = core_colonel_cpp_CColonel_ctor_FUN_00444330(pCVar1);
  return pCVar1;
}
