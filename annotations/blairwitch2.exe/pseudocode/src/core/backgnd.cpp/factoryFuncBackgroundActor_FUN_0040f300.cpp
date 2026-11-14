// Name: core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040f300
// Address: 0040f300
// Address Range: [[0040f300, 0040f31b]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300(void)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_factoryFuncBackgroundActor_FUN_0040f300(void)

{
  CBackgroundActor *pCVar1;
  
  pCVar1 = (CBackgroundActor *)operator_new(0x43c);
  if (pCVar1 == (CBackgroundActor *)0x0) {
    return (CBackgroundActor *)0x0;
  }
  pCVar1 = core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(pCVar1);
  return pCVar1;
}
