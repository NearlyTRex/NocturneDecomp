// Name: shape_edittool.cpp_drawDashedLine_FUN_0047a590
// Address: 0047a590
// Address Range: [[0047a590, 0047a717]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_drawDashedLine_FUN_0047a590(int x1,int y1,int x2,int y2,int dash_length)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_drawDashedLine_FUN_0047a590(int x1,int y1,int x2,int y2,int dash_length)

{
  int iVar1;
  int iVar2;
  
  iVar2 = y1;
  iVar1 = x1;
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
  }
  if (y2 < y1) {
    y1 = y2;
    y2 = iVar2;
  }
  iVar1 = 1;
  if (x1 < x2) {
    iVar2 = x1;
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,y1);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,y1);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < x2);
  }
  if (y1 < y2) {
    iVar2 = y1;
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(x2,iVar2);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x2,iVar2);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < y2);
  }
  if (x1 < x2) {
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(x2,y2);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x2,y2);
        }
      }
      x2 = x2 + -1;
      iVar1 = iVar1 + 1;
    } while (x1 < x2);
  }
  if (y1 < y2) {
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(x1,y2);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x1,y2);
        }
      }
      y2 = y2 + -1;
      iVar1 = iVar1 + 1;
    } while (y1 < y2);
  }
  return;
}
