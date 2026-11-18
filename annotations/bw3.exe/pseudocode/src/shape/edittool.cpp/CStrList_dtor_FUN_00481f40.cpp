// Name: shape_edittool.cpp_CStrList_dtor_FUN_00481f40
// Address: 00481f40
// Address Range: [[00481f40, 00481f8e]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00481f40(CStrList *this_ptr,uint flags)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00481f40(CStrList *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStrListTypeInfo);
    free(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._us = &g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_00482010(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  debugFreeChecked(this_ptr);
  return this_ptr;
}
