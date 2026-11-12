// Name: core_crossbow.cpp_factoryFuncCrossbow_FUN_0043a490
// Address: 0043a490
// Address Range: [[0043a490, 0043a4ab]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_0043a490(void)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_0043a490(void)

{
  CCrossbow *pCVar1;
  
  pCVar1 = (CCrossbow *)operator_new(0xad8);
  if (pCVar1 == (CCrossbow *)0x0) {
    return (CCrossbow *)0x0;
  }
  pCVar1 = core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(pCVar1);
  return pCVar1;
}
