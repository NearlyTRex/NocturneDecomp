// Name: core_litecone.cpp_factoryFuncLightCone_FUN_004c80c0
// Address: 004c80c0
// Address Range: [[004c80c0, 004c80db]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004c80c0(void)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_factoryFuncLightCone_FUN_004c80c0(void)

{
  CLightCone *pCVar1;
  
  pCVar1 = operator_new(0x224);
  if (pCVar1 == (CLightCone *)0x0) {
    return (CLightCone *)0x0;
  }
  pCVar1 = core_litecone_cpp_CLightCone_ctor_FUN_004c80f0(pCVar1);
  return pCVar1;
}
