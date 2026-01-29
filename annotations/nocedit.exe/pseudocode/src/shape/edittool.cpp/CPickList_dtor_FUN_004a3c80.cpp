// Name: shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
// Address: 004a3c80
// Address Range: [[004a3c80, 004a3d12]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80 (CPickList *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6)

#include "nocturne.h"

CPickList * __cdecl
shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
          (CPickList *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6)

{
  CEdButton *pCVar1;
  CEdScrollBar *pCVar2;
  CPickList *ptr;
  void *ptr_00;
  uint unaff_EBX;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPickListTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CPickListVTable;
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(this_ptr);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&this_ptr->cancel_button);
  pCVar1 = shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(pCVar1 + -1);
  pCVar2 = shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20
                     ((CEdScrollBar *)(pCVar1[-1].button_text + 0x90));
  ptr = (CPickList *)
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&pCVar2[-9].thumb_end,1,unaff_EBX)
  ;
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
