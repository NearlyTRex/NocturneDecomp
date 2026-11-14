// Name: core_smiley.cpp_factoryFuncSmiley_FUN_0056be20
// Address: 0056be20
// Address Range: [[0056be20, 0056be3b]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_0056be20(void)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_0056be20(void)

{
  CSmiley *pCVar1;
  
  pCVar1 = (CSmiley *)operator_new(0xc2ac);
  if (pCVar1 == (CSmiley *)0x0) {
    return (CSmiley *)0x0;
  }
  pCVar1 = core_smiley_cpp_CSmiley_ctor_FUN_0056be50(pCVar1);
  return pCVar1;
}
