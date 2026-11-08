// Name: FUN_00403480
// Address: 00403480
// Address Range: [[00403480, 00403699]]
// Convention: unknown
// Signature: int FUN_00403480(int param_1,int param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403480(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (_DAT_0070ca38 != 0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x97b;
    FUN_004e4500("mapFrameBuffer - already mapped!");
  }
  if (param_5 == 0) {
    iVar1 = param_2 * param_4 >> 0x1f;
    param_5 = (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((param_4 != 8) && (param_4 != 0x10)) && (param_4 != 0x20)) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x983;
    FUN_004e4500("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = param_2 * param_4 >> 0x1f;
  if ((int)((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) <
      (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x984;
    FUN_004e4500("mapFrameBuffer - invalid stride");
  }
  if ((param_2 < 1) || (param_3 < 1)) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x985;
    FUN_004e4500("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < param_3) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x986;
    FUN_004e4500("mapFrameBuffer - ySize too big!");
  }
  if (param_1 == 0) {
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x987;
    FUN_004e4500("mapFrameBuffer - invalid buffer!");
  }
  _DAT_0070ca38 = DAT_006141b8;
  _DAT_0070ca3c = DAT_006141bc;
  _DAT_0070ca40 = _DAT_01c35e48;
  DAT_006141b8 = param_2;
  _DAT_0070ca44 = _DAT_01c35e4c;
  _DAT_0070ca48 = _DAT_01c35e50;
  DAT_006141bc = param_3;
  _DAT_0070ca4c = _DAT_01c35e54;
  _DAT_01c35e48 = 0;
  _DAT_0070ca50 = DAT_006141c0;
  _DAT_01c35e4c = 0;
  _DAT_0070ca54 = _DAT_01c2a38c;
  _DAT_0070ca58 = _DAT_01c2a390 - _DAT_01c2a38c;
  DAT_006141c0 = param_4;
  iVar1 = param_3 + -1;
  _DAT_01c35e50 = param_2 + -1;
  _DAT_01c35e54 = iVar1;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      *(int *)(&DAT_01c2a38c + iVar1) = param_1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + param_5;
    } while (iVar1 < param_3 * 4);
  }
  return iVar1;
}
