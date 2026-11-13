// Name: core_shadow.cpp_factoryFuncShadow_FUN_0053c1d0
// Address: 0053c1d0
// Address Range: [[0053c1d0, 0053c1eb]]
// Convention: __cdecl
// Signature: CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_0053c1d0(void)

#include "nocturne.h"

CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_0053c1d0(void)

{
  CShadow *pCVar1;
  
  pCVar1 = (CShadow *)operator_new(0x10b80);
  if (pCVar1 == (CShadow *)0x0) {
    return (CShadow *)0x0;
  }
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_0053c200(pCVar1);
  return pCVar1;
}
