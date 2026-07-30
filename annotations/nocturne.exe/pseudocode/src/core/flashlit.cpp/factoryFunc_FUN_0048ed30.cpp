// Name: core_flashlit.cpp_factoryFunc_FUN_0048ed30
// Address: 0048ed30
// Address Range: [[0048ed30, 0048ed4b]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_0048ed30(void)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_0048ed30(void)

{
  CFlashlight *pCVar1;
  
  pCVar1 = (CFlashlight *)FUN_0056497c(0x570);
  if (pCVar1 == (CFlashlight *)0x0) {
    return (CFlashlight *)0x0;
  }
  pCVar1 = core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60(pCVar1);
  return pCVar1;
}
