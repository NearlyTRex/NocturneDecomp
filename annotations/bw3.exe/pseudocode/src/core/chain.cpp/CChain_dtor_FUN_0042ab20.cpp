// Name: core_chain.cpp_CChain_dtor_FUN_0042ab20
// Address: 0042ab20
// Address Range: [[0042ab20, 0042ab6d]]
// Convention: unknown
// Signature: CChain * core_chain_cpp_CChain_dtor_FUN_0042ab20(CChain *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChain * core_chain_cpp_CChain_dtor_FUN_0042ab20(CChain *this_ptr,uint flags)

{
  CChain *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CChainTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
