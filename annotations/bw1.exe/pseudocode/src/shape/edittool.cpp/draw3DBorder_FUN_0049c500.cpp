// Name: shape_edittool.cpp_draw3DBorder_FUN_0049c500
// Address: 0049c500
// Address Range: [[0049c500, 0049c746]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_0049c500(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_0049c500(int left,int top,int right,int bottom,int pressed)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = g_HighlightColor;
  if (pressed != 0) {
    uVar2 = g_BorderBackgroundColor;
  }
  if (g_INT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << 0x10);
    uVar2 = g_INT_01c4f020;
  }
  g_INT_01c4f020 = uVar2;
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,top,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(left,top,right + -1);
  }
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(left,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_00518300(left,top,bottom + -1);
  }
  uVar2 = g_BorderBackgroundColor;
  if (pressed != 0) {
    uVar2 = g_HighlightColor;
  }
  if (g_INT_01c3f544 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << 8);
    uVar2 = g_INT_01c4f020;
  }
  g_INT_01c4f020 = uVar2;
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,bottom + -1,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(left,bottom + -1,right + -1);
  }
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(right + -1,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_00518300(right + -1,top,bottom + -1);
  }
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0
              (left + 1,top + 1,right + -2,bottom + -2,g_ButtonFaceColor);
    return;
  }
  if (g_INT_01c3f544 == 0) {
    g_INT_01c4f020 = g_ButtonFaceColor;
  }
  else {
    iVar1 = (g_ButtonFaceColor & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar1 + 1] << 8);
  }
  engine_mini3d_cpp_fillRect_FUN_00518010(left + 1,top + 1,right + -2,bottom + -2);
  return;
}
