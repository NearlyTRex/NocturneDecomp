// Name: core_barrier.cpp_CBarrier_dtor_FUN_0040ec90
// Address: 0040ec90
// Address Range: [[0040ec90, 0040ecdd]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_0040ec90(CBarrier *this_ptr,uint flags)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_0040ec90(CBarrier *this_ptr,uint flags)

{
  CBarrier *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBarrierTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBarrier *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
