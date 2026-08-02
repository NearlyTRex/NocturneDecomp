// Name: shape_edittool.cpp_CPickList_ctor_FUN_00474c90
// Address: 00474c90
// Address Range: [[00474c90, 00474cea]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_00474c90(CPickList *this_ptr)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_00474c90(CPickList *this_ptr)

{
  CStrList *pCVar1;
  CEdScrollBar *pCVar2;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00473b60(&this_ptr->base);
  pCVar2 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_00476450
                     ((CEdScrollBar *)&pCVar1[0x13].data_array);
  pCVar2[-6].scroll_increment = (int)&g_CPickListVTable;
  pCVar2[-6].orientation = 0;
  *(byte *)&pCVar2[-6].bounds_left = 0;
  pCVar2[1].scroll_position = 0;
  pCVar2[-4].orientation = 0;
  pCVar2[-1].thumb_start = 0;
  pCVar2[-1].thumb_end = 0;
  return (CPickList *)(pCVar2 + -6);
}
