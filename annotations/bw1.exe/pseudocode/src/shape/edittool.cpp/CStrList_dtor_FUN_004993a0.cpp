// Name: shape_edittool.cpp_CStrList_dtor_FUN_004993a0
// Address: 004993a0
// Address Range: [[004993a0, 004993ee]]
// Convention: __cdecl
// Signature: CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004993a0(CStrList *this_ptr,uint flags)

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004993a0(CStrList *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CStrListTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._us = (CStrList_vtable *)&g_CStrListVTable;
  shape_edittool_cpp_CStrList_clear_FUN_00499470(this_ptr);
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
