// Name: shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
// Address: 004a2a40
// Address Range: [[004a2a40, 004a2a8e]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(CStrList *this_ptr,uint flags)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(CStrList *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CStrListTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(this_ptr);
  return this_ptr;
}
