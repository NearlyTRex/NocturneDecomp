// Name: core_dynamite.cpp_factoryFunc_FUN_0049cd80
// Address: 0049cd80
// Address Range: [[0049cd80, 0049cda2]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_factoryFunc_FUN_0049cd80(void)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_factoryFunc_FUN_0049cd80(void)

{
  CDynamite *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x58c,"..\\core\\dynamite.cpp",0x21);
  if (pCVar1 == (CDynamite *)0x0) {
    return (CDynamite *)0x0;
  }
  pCVar1 = core_dynamite_cpp_CDynamite_ctor_FUN_0049cdc0(pCVar1);
  return pCVar1;
}
