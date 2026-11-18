// Name: core_trash.cpp_CTrash_dtor_FUN_00577640
// Address: 00577640
// Address Range: [[00577640, 0057768d]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_00577640(CTrash *this_ptr,uint flags)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_00577640(CTrash *this_ptr,uint flags)

{
  CTrash *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTrashTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
