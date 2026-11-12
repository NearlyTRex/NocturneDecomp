// Name: core_litecone.cpp_factoryFuncLightCone_FUN_00502d40
// Address: 00502d40
// Address Range: [[00502d40, 00502d5b]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_00502d40(void)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_00502d40(void)

{
  CLightCone *pCVar1;
  
  pCVar1 = (CLightCone *)operator_new(0x22c);
  if (pCVar1 == (CLightCone *)0x0) {
    return (CLightCone *)0x0;
  }
  pCVar1 = core_litecone_cpp_CLightCone_ctor_FUN_00502d70(pCVar1);
  return pCVar1;
}
