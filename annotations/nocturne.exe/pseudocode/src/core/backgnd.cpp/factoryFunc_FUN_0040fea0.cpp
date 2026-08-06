// Name: core_backgnd.cpp_factoryFunc_FUN_0040fea0
// Address: 0040fea0
// Address Range: [[0040fea0, 0040febb]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void)

{
  CBackgroundActor *pCVar1;
  
  pCVar1 = operator_new(0x2d4);
  if (pCVar1 == (CBackgroundActor *)0x0) {
    return (CBackgroundActor *)0x0;
  }
  pCVar1 = core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040fed0(pCVar1);
  return pCVar1;
}
