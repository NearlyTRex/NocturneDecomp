// Name: core_health.cpp_CHealthItem_dtor_FUN_004cdb00
// Address: 004cdb00
// Address Range: [[004cdb00, 004cdb57]]
// Convention: unknown
// Signature: CHealthItem * core_health_cpp_CHealthItem_dtor_FUN_004cdb00(CHealthItem *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHealthItem * core_health_cpp_CHealthItem_dtor_FUN_004cdb00(CHealthItem *this_ptr,uint flags)

{
  CHealthItem *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHealthItemTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CHealthItemVTable;
  pCVar1 = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
