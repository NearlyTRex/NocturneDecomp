// Name: core_litecone.cpp_factoryFuncLightCone_FUN_004e3f90
// Address: 004e3f90
// Address Range: [[004e3f90, 004e3fab]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90(void)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90(void)

{
  CLightCone *pCVar1;
  
  pCVar1 = (CLightCone *)operator_new(0x22c);
  if (pCVar1 == (CLightCone *)0x0) {
    return (CLightCone *)0x0;
  }
  pCVar1 = core_litecone_cpp_CLightCone_ctor_FUN_004e3fc0(pCVar1);
  return pCVar1;
}
