// Name: core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f5b0
// Address: 0040f5b0
// Address Range: [[0040f5b0, 0040f5fd]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f5b0(CBackgroundActor *this_ptr,uint flags)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f5b0(CBackgroundActor *this_ptr,uint flags)

{
  CBackgroundActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBackgroundActorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CBackgroundActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
