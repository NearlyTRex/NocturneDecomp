// Name: core_chain.cpp_CChain_dtor_FUN_005b5f50
// Address: 005b5f50
// Address Range: [[005b5f50, 005b5f9d]]
// Convention: unknown
// Signature: CChain * core_chain_cpp_CChain_dtor_FUN_005b5f50(CChain *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChain * core_chain_cpp_CChain_dtor_FUN_005b5f50(CChain *this_ptr,uint flags)

{
  CChain *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CChainTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
