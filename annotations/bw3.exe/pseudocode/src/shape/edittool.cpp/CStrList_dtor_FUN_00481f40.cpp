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
    ptr = (void *)__vec_delete(this_ptr,&g_CStrListTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_00482010(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
