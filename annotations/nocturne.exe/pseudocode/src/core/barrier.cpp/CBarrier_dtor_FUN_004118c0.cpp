// Name: core_barrier.cpp_CBarrier_dtor_FUN_004118c0
// Address: 004118c0
// Address Range: [[004118c0, 0041190d]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_004118c0(CBarrier *this_ptr,uint flags)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_004118c0(CBarrier *this_ptr,uint flags)

{
  CBarrier *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBarrierTypeInfo_00599e50);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CBarrier *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
