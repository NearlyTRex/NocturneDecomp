// Name: core_tvbat.cpp_factoryFunc_FUN_005e3e80
// Address: 005e3e80
// MANUAL RECONSTRUCTION
// Address Range: [[005e3e80, 005e3ea2]]
// Convention: __cdecl
// Signature: CTVBat * __cdecl core_tvbat_cpp_factoryFunc_FUN_005e3e80(void)

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_factoryFunc_FUN_005e3e80(void)

{
  CTVBat *pCVar1;
  
  pCVar1 = (CTVBat *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CTVBat),"..\\core\\tvbat.cpp",0x39);
  if (pCVar1 == (CTVBat *)0x0) {
    return (CTVBat *)0x0;
  }
  pCVar1 = core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(pCVar1);
  return pCVar1;
}
