// Name: core_lightpis.cpp_factoryFuncLightPis_FUN_005015e0
// Address: 005015e0
// Address Range: [[005015e0, 005015fb]]
// Convention: __cdecl
// Signature: CLightPis * __cdecl core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0(void)

#include "nocturne.h"

CLightPis * __cdecl core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0(void)

{
  CLightPis *pCVar1;
  
  pCVar1 = (CLightPis *)operator_new(0x598);
  if (pCVar1 == (CLightPis *)0x0) {
    return (CLightPis *)0x0;
  }
  pCVar1 = core_lightpis_cpp_CLightPis_ctor_FUN_00501610(pCVar1);
  return pCVar1;
}
