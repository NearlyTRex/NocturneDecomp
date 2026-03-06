// Name: shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
// Address: 004a3c80
// Address Range: [[004a3c80, 004a3d12]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr,uint flags)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr,uint flags)

{
  CPickList_ptr_704 pCVar1;
  CPickList_ptr_476 pCVar2;
  CPickList_ptr_420 pCVar3;
  CPickList *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPickListTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CPickListVTable;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(this_ptr);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&this_ptr->cancel_button,0);
  pCVar2 = shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&ADJ(pCVar1)->ok_button,0);
  pCVar3 = shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&ADJ(pCVar2)->scrollbar,0);
  ptr = (CPickList *)shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&ADJ(pCVar3)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
