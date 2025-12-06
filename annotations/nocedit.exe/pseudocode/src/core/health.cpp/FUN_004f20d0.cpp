// Name: core_health.cpp_FUN_004f20d0
// Address: 004f20d0
// Address Range: [[004f20d0, 004f211d]]
// Convention: __cdecl
// Signature: CHealthItem * core_health.cpp_FUN_004f20d0(CHealthItem * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_FUN_004f20d0(CHealthItem *this_ptr,uint d1,uint d2)

{
  CHealthItem *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHealthItemTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
