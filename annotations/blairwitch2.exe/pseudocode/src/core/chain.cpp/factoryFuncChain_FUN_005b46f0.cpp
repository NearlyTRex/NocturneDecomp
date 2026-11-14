// Name: core_chain.cpp_factoryFuncChain_FUN_005b46f0
// Address: 005b46f0
// Address Range: [[005b46f0, 005b470b]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_005b46f0(void)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_factoryFuncChain_FUN_005b46f0(void)

{
  CChain *pCVar1;
  
  pCVar1 = (CChain *)operator_new(0x578);
  if (pCVar1 == (CChain *)0x0) {
    return (CChain *)0x0;
  }
  pCVar1 = core_chain_cpp_CChain_ctor_FUN_005b4720(pCVar1);
  return pCVar1;
}
