// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005ab7f0
// Address: 005ab7f0
// Address Range: [[005ab7f0, 005ab83d]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0(CWaterActor *this_ptr,uint flags)

{
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CWaterActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
