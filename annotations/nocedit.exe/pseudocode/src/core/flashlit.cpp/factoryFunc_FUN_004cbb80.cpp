// Name: core_flashlit.cpp_factoryFunc_FUN_004cbb80
// Address: 004cbb80
// Address Range: [[004cbb80, 004cbba2]]
// Convention: __cdecl
// Signature: CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_004cbb80(void)

#include "nocturne.h"

CFlashlight * __cdecl core_flashlit_cpp_factoryFunc_FUN_004cbb80(void)

{
  CFlashlight *pCVar1;
  
  pCVar1 = (CFlashlight *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\flashlit.cpp",0x2b);
  if (pCVar1 == (CFlashlight *)0x0) {
    return (CFlashlight *)0x0;
  }
  pCVar1 = core_flashlit_cpp_CFlashlight_ctor_FUN_004cbbc0(pCVar1);
  return pCVar1;
}
