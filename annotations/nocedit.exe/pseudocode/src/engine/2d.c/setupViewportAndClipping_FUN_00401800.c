// Name: engine_2d.c_setupViewportAndClipping_FUN_00401800
// Address: 00401800
// Address Range: [[00401800, 00401896]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401800(int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401800(int left,int top,int right,int bottom)

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
  g_ViewportCenterXFixed = iVar1 * 0x10000;
  g_ViewportRightFixed = (iVar1 + left + 1) * 0x10000;
  g_ViewportCenterYFixed = iVar2 * -0x10000;
  g_ViewportBottomFixed = (iVar2 + top + 1) * 0x10000;
  return;
}
