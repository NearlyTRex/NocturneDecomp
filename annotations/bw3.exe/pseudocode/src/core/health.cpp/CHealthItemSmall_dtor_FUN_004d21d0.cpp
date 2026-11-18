// Name: core_health.cpp_CHealthItemSmall_dtor_FUN_004d21d0
// Address: 004d21d0
// Address Range: [[004d21d0, 004d221d]]
// Convention: __cdecl
// Signature: CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_dtor_FUN_004d21d0(CHealthItemSmall *this_ptr,uint flags)

#include "nocturne.h"

CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_dtor_FUN_004d21d0(CHealthItemSmall *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHealthItemSmallTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CHealthItemSmall *)ptr;
  }
  debugFreeChecked(ptr);
  return (CHealthItemSmall *)ptr;
}
