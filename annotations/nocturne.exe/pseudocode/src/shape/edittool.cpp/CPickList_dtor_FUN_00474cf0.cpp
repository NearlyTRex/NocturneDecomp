// Name: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
// Address: 00474cf0
// Address Range: [[00474cf0, 00474d64]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags)

{
  int iVar1;
  CPickList *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPickListTypeInfo_0059cad0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable =
       (CStrList_vtable *)&PTR_shape_edittool_cpp_CPickList_dtor_FUN_00474cf0_0059ca94;
  shape_edittool_cpp_FUN_00476160(this_ptr);
  iVar1 = shape_edittool_cpp_FUN_00476490(this_ptr->search_text_buffer + 0x2c,0);
  pCVar2 = (CPickList *)
           shape_edittool_cpp_CStrList_dtor_FUN_00473b80((CStrList *)(iVar1 + -0x138),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
