// Name: core_shadowsc.cpp_factoryFuncShadowsc_FUN_00560470
// Address: 00560470
// Address Range: [[00560470, 0056048b]]
// Convention: __cdecl
// Signature: CShadowsc * __cdecl core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470(void)

#include "nocturne.h"

CShadowsc * __cdecl core_shadowsc_cpp_factoryFuncShadowsc_FUN_00560470(void)

{
  CShadowsc *pCVar1;
  
  pCVar1 = (CShadowsc *)operator_new(0xc29c);
  if (pCVar1 == (CShadowsc *)0x0) {
    return (CShadowsc *)0x0;
  }
  pCVar1 = core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0(pCVar1);
  return pCVar1;
}
