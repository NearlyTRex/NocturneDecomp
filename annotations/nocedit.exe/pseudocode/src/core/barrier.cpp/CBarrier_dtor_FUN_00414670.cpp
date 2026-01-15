// Name: core_barrier.cpp_CBarrier_dtor_FUN_00414670
// Address: 00414670
// Address Range: [[00414670, 004146bd]]
// Convention: __cdecl
// Signature: CBarrier * core_barrier.cpp_CBarrier_dtor_FUN_00414670(CBarrier * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00414670(CBarrier *this_ptr,uint d1,uint d2)

{
  CBarrier *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBarrierTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBarrier *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
