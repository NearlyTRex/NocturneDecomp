// Name: core_thehand.cpp_factoryFuncTheHand_FUN_00599040
// Address: 00599040
// Address Range: [[00599040, 0059905b]]
// Convention: __cdecl
// Signature: CTheHand * __cdecl core_thehand_cpp_factoryFuncTheHand_FUN_00599040(void)

#include "nocturne.h"

CTheHand * __cdecl core_thehand_cpp_factoryFuncTheHand_FUN_00599040(void)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)operator_new(0xc2e0);
  if (pCVar1 == (CTheHand *)0x0) {
    return (CTheHand *)0x0;
  }
  pCVar1 = core_thehand_cpp_CTheHand_ctor_FUN_00599070(pCVar1);
  return pCVar1;
}
