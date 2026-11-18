// Name: shape_edittool.cpp_draw3DInsetBorder_FUN_004852f0
// Address: 004852f0
// Address Range: [[004852f0, 0048550d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(int left,int top,int right,int bottom,int pressed_offset,int direction)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_004852f0(int left,int top,int right,int bottom,int pressed_offset,int direction)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (g_INT_01c5baec == 0) {
    g_INT_01c6b5c0 = g_InsetColor;
  }
  else {
    iVar3 = (g_InsetColor & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10);
  }
  if ((direction == 0) || (direction == 1)) {
    iVar3 = (left + right + -1) / 2 + pressed_offset;
    iVar2 = (bottom - top) / 3;
    iVar1 = iVar3 + iVar2;
    if (direction == 0) {
      iVar4 = pressed_offset + top + 1 + iVar2;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          while (g_INT_01c5baec != 0) {
            engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar5,iVar4,iVar3);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_2d_c_drawHLine_FUN_00402f30(iVar5,iVar4,iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      iVar5 = (bottom - iVar2) + -2 + pressed_offset;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          while (g_INT_01c5baec == 0) {
            engine_2d_c_drawHLine_FUN_00402f30(iVar4,iVar5,iVar3);
            iVar4 = iVar4 + -1;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar4,iVar5,iVar3);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
      }
    }
  }
  else {
    iVar3 = (top + bottom + -1) / 2 + pressed_offset;
    iVar2 = (right - left) / 3;
    iVar1 = iVar3 + iVar2;
    if (direction == 2) {
      iVar4 = left + iVar2 + 1 + pressed_offset;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          while (g_INT_01c5baec == 0) {
            engine_2d_c_drawVLine_FUN_00403040(iVar4,iVar5,iVar3);
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_drawVLine_FUN_004f3ad0(iVar4,iVar5,iVar3);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      iVar4 = (right - iVar2) + -2 + pressed_offset;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          while (g_INT_01c5baec == 0) {
            engine_2d_c_drawVLine_FUN_00403040(iVar4,iVar5,iVar3);
            iVar4 = iVar4 + -1;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_drawVLine_FUN_004f3ad0(iVar4,iVar5,iVar3);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
      }
    }
  }
  return;
}
