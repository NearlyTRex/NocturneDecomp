// Name: core_chain.cpp_factoryFuncChain_FUN_004292b0
// Address: 004292b0
// Address Range: [[004292b0, 004292cb]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_004292b0(void)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_004292b0(void)

{
  CChain *pCVar1;
  
  pCVar1 = (CChain *)operator_new(0x578);
  if (pCVar1 == (CChain *)0x0) {
    return (CChain *)0x0;
  }
  pCVar1 = core_chain_cpp_CChain_ctor_FUN_004292e0(pCVar1);
  return pCVar1;
}
