// Name: core_backgnd.cpp_factoryFunc_FUN_00412770
// Address: 00412770
// MANUAL RECONSTRUCTION
// Address Range: [[00412770, 00412792]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_00412770(void)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_00412770(void)

{
  CBackgroundActor *pCVar1;
  
  pCVar1 = (CBackgroundActor *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBackgroundActor),"..\\core\\backgnd.cpp",38);
  if (pCVar1 == (CBackgroundActor *)0x0) {
    return (CBackgroundActor *)0x0;
  }
  pCVar1 = core_backgnd_cpp_CBackgroundActor_ctor_FUN_004127b0(pCVar1);
  return pCVar1;
}
