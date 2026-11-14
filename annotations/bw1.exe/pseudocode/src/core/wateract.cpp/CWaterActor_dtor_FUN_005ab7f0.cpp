// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005ab7f0
// Address: 005ab7f0
// Address Range: [[005ab7f0, 005ab83d]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0(CWaterActor *this_ptr,uint flags)

{
  CWaterActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CWaterActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
