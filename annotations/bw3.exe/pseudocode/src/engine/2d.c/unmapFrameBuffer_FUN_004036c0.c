// Name: engine_2d.c_unmapFrameBuffer_FUN_004036c0
// Address: 004036c0
// Address Range: [[004036c0, 0040378b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_007303b8 == 0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x9e5;
    core_main_c_FUN_004e4330("unmapFrameBuffer - frame buffer was not mapped!");
  }
  DAT_005fba18 = _DAT_007303b8;
  DAT_005fba1c = _DAT_007303bc;
  _DAT_01c6b5a8 = _DAT_007303c0;
  _DAT_01c6b5ac = _DAT_007303c4;
  _DAT_01c6b5b0 = _DAT_007303c8;
  _DAT_01c6b5b4 = _DAT_007303cc;
  DAT_005fba20 = _DAT_007303d0;
  if (0 < _DAT_007303bc) {
    iVar1 = _DAT_007303bc * 4;
    iVar2 = 0;
    iVar3 = _DAT_007303d4;
    do {
      *(int *)(&DAT_01c5faec + iVar2) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + _DAT_007303d8;
    } while (iVar2 < iVar1);
  }
  _DAT_007303b8 = 0;
  return;
}
