// Name: core_chain.cpp_factoryFuncChain_FUN_0042b720
// Address: 0042b720
// Address Range: [[0042b720, 0042b73b]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_0042b720(void)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_0042b720(void)

{
  CChain *pCVar1;
  
  pCVar1 = operator_new(0x570);
  if (pCVar1 == (CChain *)0x0) {
    return (CChain *)0x0;
  }
  pCVar1 = core_chain_cpp_CChain_ctor_FUN_0042b750(pCVar1);
  return pCVar1;
}
