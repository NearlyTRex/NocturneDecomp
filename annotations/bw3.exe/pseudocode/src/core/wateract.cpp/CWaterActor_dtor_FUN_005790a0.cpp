// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005790a0
// Address: 005790a0
// Address Range: [[005790a0, 005790ed]]
// Convention: unknown
// Signature: CWaterActor * core_wateract_cpp_CWaterActor_dtor_FUN_005790a0(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CWaterActor * core_wateract_cpp_CWaterActor_dtor_FUN_005790a0(CWaterActor *this_ptr,uint flags)

{
  CWaterActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CWaterActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
