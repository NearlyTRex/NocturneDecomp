// Name: core_trash.cpp_CTrash_dtor_FUN_0056def0
// Address: 0056def0
// Address Range: [[0056def0, 0056df3d]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0056def0(CTrash *this_ptr,uint flags)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_0056def0(CTrash *this_ptr,uint flags)

{
  CTrash *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTrashTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
