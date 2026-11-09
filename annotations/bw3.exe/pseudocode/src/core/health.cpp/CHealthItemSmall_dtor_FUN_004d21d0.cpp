// Name: core_health.cpp_CHealthItemSmall_dtor_FUN_004d21d0
// Address: 004d21d0
// Address Range: [[004d21d0, 004d221d]]
// Convention: unknown
// Signature: CHealthItemSmall * core_health_cpp_CHealthItemSmall_dtor_FUN_004d21d0(CHealthItemSmall *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHealthItemSmall * core_health_cpp_CHealthItemSmall_dtor_FUN_004d21d0(CHealthItemSmall *this_ptr,uint flags)

{
  CHealthItemSmall *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHealthItemSmallTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CHealthItemSmall *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
