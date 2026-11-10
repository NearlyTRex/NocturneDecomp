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
  
  if (_DAT_0070ca38 == 0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x9cb;
    core_main_c_FUN_004e4500("unmapFrameBuffer - frame buffer was not mapped!");
  }
  DAT_006141b8 = _DAT_0070ca38;
  DAT_006141bc = _DAT_0070ca3c;
  _DAT_01c35e48 = _DAT_0070ca40;
  _DAT_01c35e4c = _DAT_0070ca44;
  _DAT_01c35e50 = _DAT_0070ca48;
  _DAT_01c35e54 = _DAT_0070ca4c;
  DAT_006141c0 = _DAT_0070ca50;
  if (0 < _DAT_0070ca3c) {
    iVar1 = _DAT_0070ca3c * 4;
    iVar2 = 0;
    iVar3 = _DAT_0070ca54;
    do {
      *(int *)(&DAT_01c2a38c + iVar2) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + _DAT_0070ca58;
    } while (iVar2 < iVar1);
  }
  _DAT_0070ca38 = 0;
  return;
}
