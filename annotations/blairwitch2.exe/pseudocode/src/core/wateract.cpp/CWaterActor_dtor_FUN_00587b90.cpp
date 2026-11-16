// Name: core_wateract.cpp_CWaterActor_dtor_FUN_00587b90
// Address: 00587b90
// Address Range: [[00587b90, 00587bdd]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_00587b90(CWaterActor *this_ptr,uint flags)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_dtor_FUN_00587b90(CWaterActor *this_ptr,uint flags)

{
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWaterActorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CWaterActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
