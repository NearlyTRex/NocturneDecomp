// Name: core_health.cpp_CHealthItem_dtor_FUN_004ea5a0
// Address: 004ea5a0
// Address Range: [[004ea5a0, 004ea5ed]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004ea5a0(CHealthItem *this_ptr,uint flags)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004ea5a0(CHealthItem *this_ptr,uint flags)

{
  CHealthItem *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHealthItemTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
