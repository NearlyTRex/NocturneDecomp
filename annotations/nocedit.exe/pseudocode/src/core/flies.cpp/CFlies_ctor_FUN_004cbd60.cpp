// Name: core_flies.cpp_CFlies_ctor_FUN_004cbd60
// Address: 004cbd60
// Address Range: [[004cbd60, 004cbe15]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_ctor_FUN_004cbd60(CFlies *this_ptr)

{
  CFlies *pCVar1;
  CFlies_ptr_360 pvVar1;
  uint local_c [3];
  
  pCVar1 = (CFlies *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar1 = __arrinit(pCVar1->flies,200,&g_SFlyTypeInfo);
  ADJ(pvVar1)->base.vtable._ub = &g_CFliesVTable;
  ADJ(pvVar1)->fly_count = 0x14;
  if (&ADJ(pvVar1)->box_size != (CVector3f *)local_c) {
    (ADJ(pvVar1)->box_size).x = 5.0;
    (ADJ(pvVar1)->box_size).y = 5.0;
    (ADJ(pvVar1)->box_size).z = 5.0;
  }
  ADJ(pvVar1)->gather_time = 0.0;
  ADJ(pvVar1)->gather_timer = 0.0;
  ADJ(pvVar1)->follow_actor = (CDemonActor *)0x0;
  ADJ(pvVar1)->dead = 0;
  ADJ(pvVar1)->is_visible = 1;
  ADJ(pvVar1)->gather_count = 0;
  return ADJ(pvVar1);
}
