// Name: core_chain.cpp_CChain_dtor_FUN_005b5f50
// Address: 005b5f50
// Address Range: [[005b5f50, 005b5f9d]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_005b5f50(CChain *this_ptr,uint flags)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_005b5f50(CChain *this_ptr,uint flags)

{
  CChain *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CChainTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
