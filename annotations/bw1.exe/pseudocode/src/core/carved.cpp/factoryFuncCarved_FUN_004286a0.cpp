// Name: core_carved.cpp_factoryFuncCarved_FUN_004286a0
// Address: 004286a0
// Address Range: [[004286a0, 004286bb]]
// Convention: __cdecl
// Signature: CCarved * __cdecl core_carved_cpp_factoryFuncCarved_FUN_004286a0(void)

#include "nocturne.h"

CCarved * __cdecl core_carved_cpp_factoryFuncCarved_FUN_004286a0(void)

{
  CCarved *pCVar1;
  
  pCVar1 = (CCarved *)operator_new(0xc2f4);
  if (pCVar1 == (CCarved *)0x0) {
    return (CCarved *)0x0;
  }
  pCVar1 = core_carved_cpp_CCarved_ctor_FUN_004286d0(pCVar1);
  return pCVar1;
}
