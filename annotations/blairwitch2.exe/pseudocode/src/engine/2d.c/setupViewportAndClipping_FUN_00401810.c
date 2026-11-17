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
  
  g_INT_01c35e50 = right;
  g_INT_01c35e54 = bottom;
  g_INT_01c35e4c = top;
  g_INT_01c35e58 = (right - left) + 1;
  g_INT_01c35e5c = (bottom - top) + 1;
  iVar1 = (g_INT_01c35e58 / 2 & 0xffffU) - 1;
  g_INT_01c35e48 = left;
  iVar2 = (g_INT_01c35e5c / 2 & 0xffffU) - 1;
  g_INT_01c35e38 = iVar1 * 0x10000;
  g_INT_01c35e40 = (iVar1 + left + 1) * 0x10000;
  g_INT_01c35e3c = iVar2 * -0x10000;
  g_INT_01c35e44 = (iVar2 + top + 1) * 0x10000;
  return;
}
