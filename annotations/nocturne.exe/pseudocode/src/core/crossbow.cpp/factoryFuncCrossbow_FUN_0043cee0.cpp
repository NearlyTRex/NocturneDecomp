// Name: core_crossbow.cpp_factoryFuncCrossbow_FUN_0043cee0
// Address: 0043cee0
// Address Range: [[0043cee0, 0043cefb]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_0043cee0(void)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_0043cee0(void)

{
  CCrossbow *pCVar1;
  
  pCVar1 = operator_new(0x810);
  if (pCVar1 == (CCrossbow *)0x0) {
    return (CCrossbow *)0x0;
  }
  pCVar1 = core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10(pCVar1);
  return pCVar1;
}
