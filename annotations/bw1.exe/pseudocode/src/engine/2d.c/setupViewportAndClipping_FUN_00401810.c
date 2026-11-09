// Name: engine_2d.c_setupViewportAndClipping_FUN_00401810
// Address: 00401810
// Address Range: [[00401810, 004018a6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401810(int left,int top,int right,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401810(int left,int top,int right,int bottom)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c4f010 = right;
  _DAT_01c4f014 = bottom;
  _DAT_01c4f00c = top;
  _DAT_01c4f018 = (right - left) + 1;
  _DAT_01c4f01c = (bottom - top) + 1;
  iVar1 = (_DAT_01c4f018 / 2 & 0xffffU) - 1;
  _DAT_01c4f008 = left;
  iVar2 = (_DAT_01c4f01c / 2 & 0xffffU) - 1;
  _DAT_01c4eff8 = iVar1 * 0x10000;
  _DAT_01c4f000 = (iVar1 + left + 1) * 0x10000;
  _DAT_01c4effc = iVar2 * -0x10000;
  _DAT_01c4f004 = (iVar2 + top + 1) * 0x10000;
  return;
}
