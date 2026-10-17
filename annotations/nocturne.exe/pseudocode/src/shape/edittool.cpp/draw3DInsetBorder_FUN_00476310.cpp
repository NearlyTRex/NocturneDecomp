// Name: shape_edittool.cpp_draw3DInsetBorder_FUN_00476310
// Address: 00476310
// Address Range: [[00476310, 00476443]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(int left,int top,int right,int bottom,int pressed_offset,int direction)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(int left,int top,int right,int bottom,int pressed_offset,int direction)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  g_ActiveRenderColor = 0;
  if ((direction == 0) || (direction == 1)) {
    iVar3 = (left + right + -1) / 2 + pressed_offset;
    iVar2 = (bottom - top) / 3;
    iVar1 = iVar3 + iVar2;
    if (direction == 0) {
      iVar4 = pressed_offset + top + iVar2 + 1;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00403bd0(iVar5,iVar4,iVar3);
          iVar4 = iVar4 + 1;
          iVar3 = iVar2;
          iVar5 = iVar5 + -1;
        } while (iVar2 < iVar1);
      }
    }
    else {
      iVar5 = (bottom - iVar2) + -2 + pressed_offset;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00403bd0(iVar4,iVar5,iVar3);
          iVar5 = iVar5 + -1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
  }
  else {
    iVar3 = (top + bottom + -1) / 2 + pressed_offset;
    iVar2 = (right - left) / 3;
    iVar1 = iVar3 + iVar2;
    if (direction == 2) {
      iVar5 = left + iVar2 + 1 + pressed_offset;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00403ce0(iVar5,iVar4,iVar3);
          iVar5 = iVar5 + 1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
    else {
      iVar5 = pressed_offset + (right - iVar2) + -2;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00403ce0(iVar5,iVar4,iVar3);
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
