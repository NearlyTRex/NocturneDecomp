// Name: shape_edittool.cpp_CPickList_dtor_FUN_0049a710
// Address: 0049a710
// Address Range: [[0049a710, 0049a7a2]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_0049a710(CPickList *this_ptr,uint flags)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_0049a710(CPickList *this_ptr,uint flags)

{
  CEdButton *pCVar1;
  CEdScrollBar *pCVar2;
  CPickList *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPickListTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._us = (CStrList_vtable *)&g_CPickListVTable;
  shape_edittool_cpp_CPickList_clear_FUN_0049c370(this_ptr);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(&this_ptr->cancel_button,0);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(pCVar1 + -1,0);
  pCVar2 = shape_edittool_cpp_CEdScrollBar_dtor_FUN_0049c9b0
                     ((CEdScrollBar *)(pCVar1[-1].button_text + 0x90),0);
  pCVar3 = (CPickList *)
           shape_edittool_cpp_CStrList_dtor_FUN_004993a0((CStrList *)&pCVar2[-9].bounds_top,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005c0344(pCVar3);
  return pCVar3;
}
