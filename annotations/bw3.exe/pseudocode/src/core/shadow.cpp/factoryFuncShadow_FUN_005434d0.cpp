// Name: core_shadow.cpp_factoryFuncShadow_FUN_005434d0
// Address: 005434d0
// Address Range: [[005434d0, 005434eb]]
// Convention: __cdecl
// Signature: CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_005434d0(void)

#include "nocturne.h"

CShadow * __cdecl core_shadow_cpp_factoryFuncShadow_FUN_005434d0(void)

{
  CShadow *pCVar1;
  
  pCVar1 = (CShadow *)operator_new(0xd0e8);
  if (pCVar1 == (CShadow *)0x0) {
    return (CShadow *)0x0;
  }
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500(pCVar1);
  return pCVar1;
}
