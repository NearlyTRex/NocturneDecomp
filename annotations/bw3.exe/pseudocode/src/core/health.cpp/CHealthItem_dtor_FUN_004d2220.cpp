// Name: core_health.cpp_CHealthItem_dtor_FUN_004d2220
// Address: 004d2220
// Address Range: [[004d2220, 004d226d]]
// Convention: __cdecl
// Signature: CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004d2220(CHealthItem *this_ptr,uint flags)

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_CHealthItem_dtor_FUN_004d2220(CHealthItem *this_ptr,uint flags)

{
  CHealthItem *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHealthItemTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
