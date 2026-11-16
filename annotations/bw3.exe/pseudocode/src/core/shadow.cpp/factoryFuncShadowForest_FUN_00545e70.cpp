// Name: core_shadow.cpp_factoryFuncShadowForest_FUN_00545e70
// Address: 00545e70
// Address Range: [[00545e70, 00545e8b]]
// Convention: __cdecl
// Signature: CShadowForest * __cdecl core_shadow_cpp_factoryFuncShadowForest_FUN_00545e70(void)

#include "nocturne.h"

CShadowForest * __cdecl core_shadow_cpp_factoryFuncShadowForest_FUN_00545e70(void)

{
  CShadowForest *pCVar1;
  
  pCVar1 = (CShadowForest *)operator_new(0xd0e8);
  if (pCVar1 == (CShadowForest *)0x0) {
    return (CShadowForest *)0x0;
  }
  pCVar1 = core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(pCVar1);
  return pCVar1;
}
