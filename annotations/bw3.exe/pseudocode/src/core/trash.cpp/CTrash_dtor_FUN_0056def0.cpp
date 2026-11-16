// Name: core_trash.cpp_CTrash_dtor_FUN_0056def0
// Address: 0056def0
// Address Range: [[0056def0, 0056df3d]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0056def0(CTrash *this_ptr,uint flags)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0056def0(CTrash *this_ptr,uint flags)

{
  CTrash *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTrashTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
