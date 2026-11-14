// Name: core_biggs.cpp_factoryFuncBiggs_FUN_004149c0
// Address: 004149c0
// Address Range: [[004149c0, 004149db]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_factoryFuncBiggs_FUN_004149c0(void)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_factoryFuncBiggs_FUN_004149c0(void)

{
  CBiggs *pCVar1;
  
  pCVar1 = (CBiggs *)operator_new(0xd07c);
  if (pCVar1 == (CBiggs *)0x0) {
    return (CBiggs *)0x0;
  }
  pCVar1 = core_biggs_cpp_CBiggs_ctor_FUN_004149f0(pCVar1);
  return pCVar1;
}
