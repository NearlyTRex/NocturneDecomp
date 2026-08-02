// Name: core_health.cpp_CHealthItem_dtor_FUN_004b4460
// Address: 004b4460
// Address Range: [[004b4460, 004b44ad]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004b4460(CHealthItem *this_ptr,uint flags)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004b4460(CHealthItem *this_ptr,uint flags)

{
  CHealthItem *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHealthItemTypeInfo_0059eaf0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
