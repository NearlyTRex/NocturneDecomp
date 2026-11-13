// Name: core_exorcism.cpp_factoryFuncExorcism_FUN_0048a2e0
// Address: 0048a2e0
// Address Range: [[0048a2e0, 0048a2fb]]
// Convention: __cdecl
// Signature: CExorcism * __cdecl core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0(void)

#include "nocturne.h"

CExorcism * __cdecl core_exorcism_cpp_factoryFuncExorcism_FUN_0048a2e0(void)

{
  CExorcism *pCVar1;
  
  pCVar1 = (CExorcism *)operator_new(0x62c);
  if (pCVar1 == (CExorcism *)0x0) {
    return (CExorcism *)0x0;
  }
  pCVar1 = core_exorcism_cpp_CExorcism_ctor_FUN_0048a310(pCVar1);
  return pCVar1;
}
