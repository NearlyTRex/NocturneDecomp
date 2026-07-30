// Name: core_barrier.cpp_CBarrier_ctor_FUN_00411710
// Address: 00411710
// Address Range: [[00411710, 0041175a]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00411710(CBarrier *this_ptr)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00411710(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CBarrierVTable;
  (pCVar1->size).z = 5.0;
  pCVar1->effect_class_name_list[0] = '\0';
  pCVar1->add_to_path_grid = 1;
  (pCVar1->size).y = (pCVar1->size).z;
  (pCVar1->size).x = (pCVar1->size).y;
  return pCVar1;
}
