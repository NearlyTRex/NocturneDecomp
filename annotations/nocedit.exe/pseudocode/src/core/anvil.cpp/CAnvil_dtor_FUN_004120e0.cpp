// Name: core_anvil.cpp_CAnvil_dtor_FUN_004120e0
// Address: 004120e0
// Address Range: [[004120e0, 0041212d]]
// Convention: __cdecl
// Signature: CAnvil * core_anvil.cpp_CAnvil_dtor_FUN_004120e0(CAnvil * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_004120e0(CAnvil *this_ptr,uint d1,uint d2)

{
  CAnvil *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CAnvilTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
