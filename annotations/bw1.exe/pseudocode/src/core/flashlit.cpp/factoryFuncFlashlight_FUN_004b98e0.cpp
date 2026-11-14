// Name: core_flashlit.cpp_factoryFuncFlashlight_FUN_004b98e0
// Address: 004b98e0
// Address Range: [[004b98e0, 004b98fb]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0(void)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_factoryFuncFlashlight_FUN_004b98e0(void)

{
  CFlashlight *pCVar1;
  
  pCVar1 = (CFlashlight *)operator_new(0x578);
  if (pCVar1 == (CFlashlight *)0x0) {
    return (CFlashlight *)0x0;
  }
  pCVar1 = core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910(pCVar1);
  return pCVar1;
}
