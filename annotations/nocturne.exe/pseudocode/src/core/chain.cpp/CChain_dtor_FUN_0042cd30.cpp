// Name: core_chain.cpp_CChain_dtor_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd94]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042cd30(CChain *this_ptr,uint flags)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042cd30(CChain *this_ptr,uint flags)

{
  SChainVertex *pSVar1;
  CChain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CChainTypeInfo_0059b340);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_chain_cpp_SChainVertex_arrdtor_FUN_0042cdc0(this_ptr->vertices,0);
  ptr = (CChain *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pSVar1[-0x12].position.y,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
