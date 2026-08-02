// Name: core_barrier.cpp_CBarrier_dtor_FUN_004118c0
// Address: 004118c0
// Address Range: [[004118c0, 0041190d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_004118c0(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_004118c0(CDemonActor *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBarrierTypeInfo_00599e50);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
