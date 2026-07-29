// Name: core_chain.cpp_CChain_dtor_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd94]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042cd30(CChain *this_ptr,uint flags)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042cd30(CChain *this_ptr,uint flags)

{
  int iVar1;
  CChain *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CChainTypeInfo_0059b340);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  iVar1 = core_chain_cpp_FUN_0042cdc0(this_ptr->vertices,0);
  pCVar2 = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)(iVar1 + -0x284),1)
  ;
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
