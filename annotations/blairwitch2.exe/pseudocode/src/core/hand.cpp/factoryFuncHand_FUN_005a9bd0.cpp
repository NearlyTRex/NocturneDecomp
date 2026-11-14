// Name: core_hand.cpp_factoryFuncHand_FUN_005a9bd0
// Address: 005a9bd0
// Address Range: [[005a9bd0, 005a9beb]]
// Convention: __cdecl
// Signature: CHand * __cdecl core_hand_cpp_factoryFuncHand_FUN_005a9bd0(void)

#include "nocturne.h"

CHand * __cdecl core_hand_cpp_factoryFuncHand_FUN_005a9bd0(void)

{
  CHand *pCVar1;
  
  pCVar1 = (CHand *)operator_new(0x1186c);
  if (pCVar1 == (CHand *)0x0) {
    return (CHand *)0x0;
  }
  pCVar1 = core_hand_cpp_CHand_ctor_FUN_005a9c00(pCVar1);
  return pCVar1;
}
