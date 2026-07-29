// Name: shape_edittool.cpp_FUN_00474c90
// Address: 00474c90
// Address Range: [[00474c90, 00474cea]]
// Convention: unknown
// Signature: CEdScrollBar * shape_edittool_cpp_FUN_00474c90(CStrList *param_1)

#include "nocturne.h"

CEdScrollBar * shape_edittool_cpp_FUN_00474c90(CStrList *param_1)

{
  CStrList *pCVar1;
  CEdScrollBar *pCVar2;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00473b60(param_1);
  pCVar2 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_00476450
                     ((CEdScrollBar *)&pCVar1[0x13].data_array);
  pCVar2[-6].scroll_increment = (int)&g_CPickListVTable;
  pCVar2[-6].orientation = 0;
  *(byte *)&pCVar2[-6].bounds_left = 0;
  pCVar2[1].scroll_position = 0;
  pCVar2[-4].orientation = 0;
  pCVar2[-1].thumb_start = 0;
  pCVar2[-1].thumb_end = 0;
  return pCVar2 + -6;
}
