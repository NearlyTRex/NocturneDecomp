// Name: shape_edittool.cpp_CStrList_dtor_FUN_00473b80
// Address: 00473b80
// Address Range: [[00473b80, 00473bce]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(CStrList *this_ptr,uint flags)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(CStrList *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStrListTypeInfo_0059caf0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._us = &g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_00473c50(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_00564494(this_ptr);
  return this_ptr;
}
