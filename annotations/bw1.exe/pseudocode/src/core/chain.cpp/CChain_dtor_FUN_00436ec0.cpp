// Name: core_chain.cpp_CChain_dtor_FUN_00436ec0
// Address: 00436ec0
// Address Range: [[00436ec0, 00436f0d]]
// Convention: unknown
// Signature: CChain * core_chain_cpp_CChain_dtor_FUN_00436ec0(CChain *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CChain * core_chain_cpp_CChain_dtor_FUN_00436ec0(CChain *this_ptr,uint flags)

{
  CChain *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CChainTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
