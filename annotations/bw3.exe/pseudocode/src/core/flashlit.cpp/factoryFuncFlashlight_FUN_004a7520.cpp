// Name: core_flashlit.cpp_factoryFuncFlashlight_FUN_004a7520
// Address: 004a7520
// Address Range: [[004a7520, 004a753b]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520(void)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_factoryFuncFlashlight_FUN_004a7520(void)

{
  CFlashlight *pCVar1;
  
  pCVar1 = (CFlashlight *)operator_new(0x594);
  if (pCVar1 == (CFlashlight *)0x0) {
    return (CFlashlight *)0x0;
  }
  pCVar1 = core_flashlit_cpp_CFlashlight_ctor_FUN_004a7550(pCVar1);
  return pCVar1;
}
