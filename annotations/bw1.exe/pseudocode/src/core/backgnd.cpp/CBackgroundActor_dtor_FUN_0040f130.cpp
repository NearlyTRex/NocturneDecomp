// Name: core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f130
// Address: 0040f130
// Address Range: [[0040f130, 0040f17d]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f130(CBackgroundActor *this_ptr,uint flags)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f130(CBackgroundActor *this_ptr,uint flags)

{
  CBackgroundActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBackgroundActorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBackgroundActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
