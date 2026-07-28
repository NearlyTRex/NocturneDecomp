// Name: engine_2d.c_setupViewportAndClipping_FUN_00401e30
// Address: 00401e30
// Address Range: [[00401e30, 00401ec6]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401e30(int left,int top,int right,int bottom)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c00c60 = right;
  _DAT_01c00c64 = bottom;
  _DAT_01c00c5c = top;
  _DAT_01c00c68 = (right - left) + 1;
  _DAT_01c00c6c = (bottom - top) + 1;
  iVar1 = (_DAT_01c00c68 / 2 & 0xffffU) - 1;
  _DAT_01c00c58 = left;
  iVar2 = (_DAT_01c00c6c / 2 & 0xffffU) - 1;
  _DAT_01c00c48 = iVar1 * 0x10000;
  _DAT_01c00c50 = (iVar1 + left + 1) * 0x10000;
  _DAT_01c00c4c = iVar2 * -0x10000;
  _DAT_01c00c54 = (iVar2 + top + 1) * 0x10000;
  return;
}
