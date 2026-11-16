// Name: core_hotdemon.cpp_factoryFuncAngelForest_FUN_004d62e0
// Address: 004d62e0
// Address Range: [[004d62e0, 004d62fb]]
// Convention: __cdecl
// Signature: CAngelForest * __cdecl core_hotdemon_cpp_factoryFuncAngelForest_FUN_004d62e0(void)

#include "nocturne.h"

CAngelForest * __cdecl core_hotdemon_cpp_factoryFuncAngelForest_FUN_004d62e0(void)

{
  CAngelForest *pCVar1;
  
  pCVar1 = (CAngelForest *)operator_new(0xd088);
  if (pCVar1 == (CAngelForest *)0x0) {
    return (CAngelForest *)0x0;
  }
  pCVar1 = core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(pCVar1);
  return pCVar1;
}
