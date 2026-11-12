// Name: core_crossbow.cpp_factoryFuncCrossbow_FUN_00449740
// Address: 00449740
// Address Range: [[00449740, 0044975b]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740(void)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740(void)

{
  CCrossbow *pCVar1;
  
  pCVar1 = (CCrossbow *)operator_new(0x820);
  if (pCVar1 == (CCrossbow *)0x0) {
    return (CCrossbow *)0x0;
  }
  pCVar1 = core_crossbow_cpp_CCrossbow_ctor_FUN_00449770(pCVar1);
  return pCVar1;
}
