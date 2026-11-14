// Name: core_chain.cpp_factoryFuncChain_FUN_00435630
// Address: 00435630
// Address Range: [[00435630, 0043564b]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_00435630(void)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_00435630(void)

{
  CChain *pCVar1;
  
  pCVar1 = (CChain *)operator_new(0x578);
  if (pCVar1 == (CChain *)0x0) {
    return (CChain *)0x0;
  }
  pCVar1 = core_chain_cpp_CChain_ctor_FUN_00435660(pCVar1);
  return pCVar1;
}
