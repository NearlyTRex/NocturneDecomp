// Name: core_smiley.cpp_factoryFuncSmiley_FUN_0051fcc0
// Address: 0051fcc0
// Address Range: [[0051fcc0, 0051fcdb]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_0051fcc0(void)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_factoryFuncSmiley_FUN_0051fcc0(void)

{
  CSmiley *pCVar1;
  
  pCVar1 = operator_new(0xbd68);
  if (pCVar1 == (CSmiley *)0x0) {
    return (CSmiley *)0x0;
  }
  pCVar1 = core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0(pCVar1);
  return pCVar1;
}
