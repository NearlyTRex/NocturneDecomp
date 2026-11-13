// Name: core_necklace.cpp_factoryFuncNecklace_FUN_005ada80
// Address: 005ada80
// Address Range: [[005ada80, 005ada9b]]
// Convention: __cdecl
// Signature: CNecklace * __cdecl core_necklace_cpp_factoryFuncNecklace_FUN_005ada80(void)

#include "nocturne.h"

CNecklace * __cdecl core_necklace_cpp_factoryFuncNecklace_FUN_005ada80(void)

{
  CNecklace *pCVar1;
  
  pCVar1 = (CNecklace *)operator_new(0x7d4);
  if (pCVar1 == (CNecklace *)0x0) {
    return (CNecklace *)0x0;
  }
  pCVar1 = core_necklace_cpp_CNecklace_ctor_FUN_005adab0(pCVar1);
  return pCVar1;
}
