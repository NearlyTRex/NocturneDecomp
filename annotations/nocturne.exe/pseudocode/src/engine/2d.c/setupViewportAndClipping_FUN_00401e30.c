// Name: engine_2d.c_setupViewportAndClipping_FUN_00401e30
// Address: 00401e30
// Address Range: [[00401e30, 00401ec6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom)

{
  int iVar1;
  int iVar2;
  
  g_ClipRight = right;
  g_ClipBottom = bottom;
  g_ClipTop = top;
  g_ViewportWidth = (right - left) + 1;
  g_ViewportHeight = (bottom - top) + 1;
  iVar1 = (g_ViewportWidth / 2 & 0xffffU) - 1;
  g_ClipLeft = left;
  iVar2 = (g_ViewportHeight / 2 & 0xffffU) - 1;
  g_Projection.half_width_fixed = iVar1 * 0x10000;
  g_Projection.center_x_fixed = (iVar1 + left + 1) * 0x10000;
  g_Projection.neg_half_height_fixed = iVar2 * -0x10000;
  g_Projection.center_y_fixed = (iVar2 + top + 1) * 0x10000;
  return;
}
