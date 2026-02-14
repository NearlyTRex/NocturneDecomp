// Name: shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
// Address: 004a59a0
// Address Range: [[004a59a0, 004a5ad1]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(int left,int top,int right,int bottom,int inner_y,int style)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(int left,int top,int right,int bottom,int inner_y,int style)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  g_ActiveRenderColor = g_InsetColor;
  if ((style == 0) || (style == 1)) {
    iVar3 = (right + left + -1) / 2 + inner_y;
    iVar2 = (bottom - top) / 3;
    iVar1 = iVar3 + iVar2;
    if (style == 0) {
      iVar4 = inner_y + top + iVar2 + 1;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00402ee0(iVar5,iVar4,iVar3);
          iVar4 = iVar4 + 1;
          iVar3 = iVar2;
          iVar5 = iVar5 + -1;
        } while (iVar2 < iVar1);
      }
    }
    else {
      iVar5 = (bottom - iVar2) + -2 + inner_y;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00402ee0(iVar4,iVar5,iVar3);
          iVar5 = iVar5 + -1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
  }
  else {
    iVar3 = (top + bottom + -1) / 2 + inner_y;
    iVar2 = (right - left) / 3;
    iVar1 = iVar3 + iVar2;
    if (style == 2) {
      iVar5 = inner_y + left + iVar2 + 1;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00402ff0(iVar5,iVar4,iVar3);
          iVar5 = iVar5 + 1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
    else {
      iVar5 = (right - iVar2) + -2 + inner_y;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00402ff0(iVar5,iVar4,iVar3);
          iVar5 = iVar5 + -1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
  }
  return;
}
