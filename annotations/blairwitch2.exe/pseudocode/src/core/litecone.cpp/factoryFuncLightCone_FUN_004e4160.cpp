// Name: core_litecone.cpp_factoryFuncLightCone_FUN_004e4160
// Address: 004e4160
// Address Range: [[004e4160, 004e417b]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004e4160(void)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004e4160(void)

{
  CLightCone *pCVar1;
  
  pCVar1 = (CLightCone *)operator_new(0x388);
  if (pCVar1 == (CLightCone *)0x0) {
    return (CLightCone *)0x0;
  }
  pCVar1 = core_litecone_cpp_CLightCone_ctor_FUN_004e4190(pCVar1);
  return pCVar1;
}
