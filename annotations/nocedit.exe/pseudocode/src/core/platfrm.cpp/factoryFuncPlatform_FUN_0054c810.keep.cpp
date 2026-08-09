// Name: core_platfrm.cpp_factoryFuncPlatform_FUN_0054c810
// Address: 0054c810
// MANUAL RECONSTRUCTION
// Address Range: [[0054c810, 0054c832]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_0054c810(void)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_factoryFuncPlatform_FUN_0054c810(void)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CPlatform),"..\\core\\platfrm.cpp",49);
  if (pCVar1 == (CPlatform *)0x0) {
    return (CPlatform *)0x0;
  }
  pCVar1 = core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(pCVar1);
  return pCVar1;
}
