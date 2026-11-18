// Name: engine_2d.c_setupViewportAndClipping_FUN_00401810
// Address: 00401810
// Address Range: [[00401810, 004018a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401810(int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401810(int left,int top,int right,int bottom)

{
  int iVar1;
  int iVar2;
  
  g_INT_01c6b5b0 = right;
  g_INT_01c6b5b4 = bottom;
  g_INT_01c6b5ac = top;
  g_ViewportWidth = (right - left) + 1;
  g_ViewportHeight = (bottom - top) + 1;
  iVar1 = (g_ViewportWidth / 2 & 0xffffU) - 1;
  g_INT_01c6b5a8 = left;
  iVar2 = (g_ViewportHeight / 2 & 0xffffU) - 1;
  g_INT_01c6b598 = iVar1 * 0x10000;
  g_INT_01c6b5a0 = (iVar1 + left + 1) * 0x10000;
  g_INT_01c6b59c = iVar2 * -0x10000;
  g_INT_01c6b5a4 = (iVar2 + top + 1) * 0x10000;
  return;
}
