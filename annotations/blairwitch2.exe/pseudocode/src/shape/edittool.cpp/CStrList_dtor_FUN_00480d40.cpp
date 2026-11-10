// Name: shape_edittool.cpp_CStrList_dtor_FUN_00480d40
// Address: 00480d40
// Address Range: [[00480d40, 00480d8e]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00480d40(CStrList *this_ptr,uint flags)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00480d40(CStrList *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CStrListTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_00480e10(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
