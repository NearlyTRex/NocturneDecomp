// Name: core_trash.cpp_CTrash_dtor_FUN_00547800
// Address: 00547800
// Address Range: [[00547800, 0054784d]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_00547800(CTrash *this_ptr,uint flags)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_dtor_FUN_00547800(CTrash *this_ptr,uint flags)

{
  CTrash *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTrashTypeInfo_005a3620);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTrash *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
