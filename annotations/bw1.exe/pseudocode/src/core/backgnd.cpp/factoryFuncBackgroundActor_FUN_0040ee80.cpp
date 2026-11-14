// Name: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040ee80
// Address: 0040ee80
// Address Range: [[0040ee80, 0040ee9b]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80(void)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040ee80(void)

{
  CBackgroundActor *pCVar1;
  
  pCVar1 = (CBackgroundActor *)operator_new(0x2e0);
  if (pCVar1 == (CBackgroundActor *)0x0) {
    return (CBackgroundActor *)0x0;
  }
  pCVar1 = core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0(pCVar1);
  return pCVar1;
}
