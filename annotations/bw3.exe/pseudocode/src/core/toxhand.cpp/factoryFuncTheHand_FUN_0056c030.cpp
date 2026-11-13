// Name: core_toxhand.cpp_factoryFuncTheHand_FUN_0056c030
// Address: 0056c030
// Address Range: [[0056c030, 0056c04b]]
// Convention: __cdecl
// Signature: CTheHand * __cdecl core_toxhand_cpp_factoryFuncTheHand_FUN_0056c030(void)

#include "nocturne.h"

CTheHand * __cdecl core_toxhand_cpp_factoryFuncTheHand_FUN_0056c030(void)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)operator_new(0xd0cc);
  if (pCVar1 == (CTheHand *)0x0) {
    return (CTheHand *)0x0;
  }
  pCVar1 = core_toxhand_cpp_CTheHand_ctor_FUN_0056c060(pCVar1);
  return pCVar1;
}
