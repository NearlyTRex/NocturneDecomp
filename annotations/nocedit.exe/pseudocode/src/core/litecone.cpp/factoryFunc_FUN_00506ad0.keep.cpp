// Name: core_litecone.cpp_factoryFunc_FUN_00506ad0
// Address: 00506ad0
// MANUAL RECONSTRUCTION
// Address Range: [[00506ad0, 00506af2]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_factoryFunc_FUN_00506ad0(void)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_factoryFunc_FUN_00506ad0(void)

{
  CLightCone *pCVar1;
  
  pCVar1 = (CLightCone *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CLightCone),"..\\core\\litecone.cpp",38)
  ;
  if (pCVar1 == (CLightCone *)0x0) {
    return (CLightCone *)0x0;
  }
  pCVar1 = core_litecone_cpp_CLightCone_ctor_FUN_00506b10(pCVar1);
  return pCVar1;
}
