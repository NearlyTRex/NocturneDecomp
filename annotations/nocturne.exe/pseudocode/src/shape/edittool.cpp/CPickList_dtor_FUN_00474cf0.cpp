// Name: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
// Address: 00474cf0
// Address Range: [[00474cf0, 00474d64]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags)

{
  CEdScrollBar *pCVar1;
  CPickList *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPickListTypeInfo_0059cad0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._us = &g_CPickListVTable._us;
  shape_edittool_cpp_FUN_00476160(this_ptr);
  pCVar1 = shape_edittool_cpp_CEdScrollBar_dtor_FUN_00476490(&this_ptr->scrollbar,0);
  ptr = (CPickList *)shape_edittool_cpp_CStrList_dtor_FUN_00473b80((CStrList *)(pCVar1 + -6),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
