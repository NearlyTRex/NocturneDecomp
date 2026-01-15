// Name: core_chain.cpp_CChain_dtor_FUN_00431360
// Address: 00431360
// Address Range: [[00431360, 004313c4]]
// Convention: __cdecl
// Signature: CChain * core_chain.cpp_CChain_dtor_FUN_00431360(CChain * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_00431360(CChain *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CChain *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CChainTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_chain_cpp_FUN_004313f0((SChainVertex **)this_ptr->field7_0x28c);
  ptr = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x28c),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
