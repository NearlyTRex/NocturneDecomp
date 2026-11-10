// Name: core_barrier.cpp_CBarrier_dtor_FUN_00410a00
// Address: 00410a00
// Address Range: [[00410a00, 00410a4d]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00410a00(CBarrier *this_ptr,uint flags)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_dtor_FUN_00410a00(CBarrier *this_ptr,uint flags)

{
  CBarrier *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBarrierTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
