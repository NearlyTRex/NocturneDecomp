// Name: core_chain.cpp_CChain_dtor_FUN_0042ab20
// Address: 0042ab20
// Address Range: [[0042ab20, 0042ab6d]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042ab20(CChain *this_ptr,uint flags)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_0042ab20(CChain *this_ptr,uint flags)

{
  CChain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CChainTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
