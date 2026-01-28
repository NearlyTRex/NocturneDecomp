// Name: core_chain.cpp_factoryFunc_FUN_0042fb40
// Address: 0042fb40
// Address Range: [[0042fb40, 0042fb62]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_factoryFunc_FUN_0042fb40(void)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_factoryFunc_FUN_0042fb40(void)

{
  CChain *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x578,"..\\core\\chain.cpp",0x30);
  if (pCVar1 == (CChain *)0x0) {
    return (CChain *)0x0;
  }
  pCVar1 = core_chain_cpp_CChain_ctor_FUN_0042fb80(pCVar1);
  return pCVar1;
}
