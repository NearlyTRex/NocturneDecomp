// Name: core_door.cpp_CDoor_dtor_FUN_00460860
// Address: 00460860
// Address Range: [[00460860, 004608ad]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00460860(CDoor *this_ptr,uint flags)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00460860(CDoor *this_ptr,uint flags)

{
  CDoor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDoorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
