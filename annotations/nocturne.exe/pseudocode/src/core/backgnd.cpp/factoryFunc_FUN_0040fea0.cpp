// Name: core_backgnd.cpp_factoryFunc_FUN_0040fea0
// Address: 0040fea0
// Address Range: [[0040fea0, 0040febb]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_factoryFunc_FUN_0040fea0(void)

{
  int iVar1;
  CBackgroundActor *pCVar2;
  
  iVar1 = FUN_0056497c(0x2d4);
  if (iVar1 == 0) {
    return (CBackgroundActor *)0x0;
  }
  pCVar2 = (CBackgroundActor *)core_backgnd_cpp_FUN_0040fed0(iVar1);
  return pCVar2;
}
