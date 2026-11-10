// Name: core_trash.cpp_CTrash_dtor_FUN_0059af00
// Address: 0059af00
// Address Range: [[0059af00, 0059af4d]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0059af00(CTrash *this_ptr,uint flags)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0059af00(CTrash *this_ptr,uint flags)

{
  CTrash *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTrashTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
