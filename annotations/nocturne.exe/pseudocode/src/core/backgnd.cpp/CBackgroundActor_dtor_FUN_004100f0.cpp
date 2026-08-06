// Name: core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0
// Address: 004100f0
// Address Range: [[004100f0, 0041013d]]
// Convention: __cdecl
// Signature: CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_004100f0(CBackgroundActor *this_ptr,uint flags)

#include "nocturne.h"

CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_dtor_FUN_004100f0(CBackgroundActor *this_ptr,uint flags)

{
  CBackgroundActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBackgroundActorTypeInfo_00599a80);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CBackgroundActor *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
