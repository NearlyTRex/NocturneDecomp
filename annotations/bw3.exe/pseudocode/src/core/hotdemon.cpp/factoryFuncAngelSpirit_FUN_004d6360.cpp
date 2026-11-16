// Name: core_hotdemon.cpp_factoryFuncAngelSpirit_FUN_004d6360
// Address: 004d6360
// Address Range: [[004d6360, 004d637b]]
// Convention: __cdecl
// Signature: CAngelSpirit * __cdecl core_hotdemon_cpp_factoryFuncAngelSpirit_FUN_004d6360(void)

#include "nocturne.h"

CAngelSpirit * __cdecl core_hotdemon_cpp_factoryFuncAngelSpirit_FUN_004d6360(void)

{
  CAngelSpirit *pCVar1;
  
  pCVar1 = (CAngelSpirit *)operator_new(0xd088);
  if (pCVar1 == (CAngelSpirit *)0x0) {
    return (CAngelSpirit *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(pCVar1);
  return pCVar1;
}
