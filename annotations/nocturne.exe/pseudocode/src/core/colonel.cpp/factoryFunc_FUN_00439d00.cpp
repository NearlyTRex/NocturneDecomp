// Name: core_colonel.cpp_factoryFunc_FUN_00439d00
// Address: 00439d00
// Address Range: [[00439d00, 00439d1b]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_00439d00(void)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_00439d00(void)

{
  CColonel *pCVar1;
  
  pCVar1 = operator_new(0x1fa54);
  if (pCVar1 == (CColonel *)0x0) {
    return (CColonel *)0x0;
  }
  pCVar1 = core_colonel_cpp_CColonel_ctor_FUN_00439d30(pCVar1);
  return pCVar1;
}
