// Name: shape_edittool.cpp_CPickList_dtor_FUN_004820b0
// Address: 004820b0
// Address Range: [[004820b0, 00482142]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004820b0(CPickList *this_ptr,uint flags)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004820b0(CPickList *this_ptr,uint flags)

{
  CEdButton *pCVar1;
  CEdScrollBar *pCVar2;
  CPickList *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPickListTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._us = (CStrList_vtable *)&g_CPickListVTable;
  shape_edittool_cpp_CPickList_clear_FUN_00483d10(this_ptr);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(&this_ptr->cancel_button,0);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(pCVar1 + -1,0);
  pCVar2 = shape_edittool_cpp_CEdScrollBar_dtor_FUN_00484350
                     ((CEdScrollBar *)(pCVar1[-1].button_text + 0x90),0);
  pCVar3 = (CPickList *)
           shape_edittool_cpp_CStrList_dtor_FUN_00480d40((CStrList *)&pCVar2[-9].bounds_top,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
