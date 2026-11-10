// Name: core_barrier.cpp_CBarrier_ctor_FUN_00410cb0
// Address: 00410cb0
// Address Range: [[00410cb0, 00410cfa]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(CBarrier *this_ptr)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(CBarrier *this_ptr)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CBarrierVTable;
  (pCVar1->size).z = 5.0;
  pCVar1->effect_class_name_list[0] = '\0';
  pCVar1->add_to_path_grid = 1;
  (pCVar1->size).y = (pCVar1->size).z;
  (pCVar1->size).x = (pCVar1->size).y;
  return pCVar1;
}
