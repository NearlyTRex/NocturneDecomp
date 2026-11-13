// Name: core_shadow.cpp_factoryFuncShadow_FUN_0055daa0
// Address: 0055daa0
// Address Range: [[0055daa0, 0055dabb]]
// Convention: __cdecl
// Signature: CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_0055daa0(void)

#include "nocturne.h"

CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_0055daa0(void)

{
  CShadow *pCVar1;
  
  pCVar1 = (CShadow *)operator_new(0xc314);
  if (pCVar1 == (CShadow *)0x0) {
    return (CShadow *)0x0;
  }
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_0055dad0(pCVar1);
  return pCVar1;
}
