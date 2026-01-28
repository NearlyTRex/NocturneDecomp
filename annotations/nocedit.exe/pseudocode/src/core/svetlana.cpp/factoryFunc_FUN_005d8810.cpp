// Name: core_svetlana.cpp_factoryFunc_FUN_005d8810
// Address: 005d8810
// Address Range: [[005d8810, 005d8832]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_factoryFunc_FUN_005d8810(void)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_factoryFunc_FUN_005d8810(void)

{
  CSvetlana *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x9f8d8,"..\\core\\svetlana.cpp",0x6e);
  if (pCVar1 == (CSvetlana *)0x0) {
    return (CSvetlana *)0x0;
  }
  pCVar1 = core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(pCVar1);
  return pCVar1;
}
