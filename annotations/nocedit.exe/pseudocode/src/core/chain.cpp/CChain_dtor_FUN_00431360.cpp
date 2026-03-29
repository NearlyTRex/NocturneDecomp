// Name: core_chain.cpp_CChain_dtor_FUN_00431360
// Address: 00431360
// Address Range: [[00431360, 004313c4]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_00431360(CChain *this_ptr,uint flags)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_00431360(CChain *this_ptr,uint flags)

{
  CChain_ptr_652 pSVar1;
  CChain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CChainTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CChain_ptr_652)core_chain_cpp_SChainVertex_arrdtor_FUN_004313f0(this_ptr->vertices,0);
  ptr = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&ADJ(pSVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
