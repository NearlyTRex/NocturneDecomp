// Name: shape_edittool.cpp_draw3DBorder_FUN_00483ea0
// Address: 00483ea0
// Address Range: [[00483ea0, 004840e6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00483ea0(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00483ea0(int left,int top,int right,int bottom,int pressed)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = g_INT_01c26400;
  if (pressed != 0) {
    uVar2 = g_INT_01c26404;
  }
  if (g_INT_01c25f84 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10);
    uVar2 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = uVar2;
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,top,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f9390(left,top,right + -1);
  }
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(left,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f93b0(left,top,bottom + -1);
  }
  uVar2 = g_INT_01c26404;
  if (pressed != 0) {
    uVar2 = g_INT_01c26400;
  }
  if (g_INT_01c25f84 != 0) {
    iVar1 = (uVar2 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8);
    uVar2 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = uVar2;
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(left,bottom + -1,right + -1);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f9390(left,bottom + -1,right + -1);
  }
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawVLine_FUN_00403040(right + -1,top,bottom + -1);
  }
  else {
    engine_mini3d_cpp_drawVLine_FUN_004f93b0(right + -1,top,bottom + -1);
  }
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(left + 1,top + 1,right + -2,bottom + -2,g_INT_01c263f4);
    return;
  }
  if (g_INT_01c25f84 == 0) {
    g_INT_01c35e60 = g_INT_01c263f4;
  }
  else {
    iVar1 = (g_INT_01c263f4 & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar1 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar1 + 1] << 8);
  }
  engine_mini3d_cpp_fillRect_FUN_004f90d0(left + 1,top + 1,right + -2,bottom + -2);
  return;
}
