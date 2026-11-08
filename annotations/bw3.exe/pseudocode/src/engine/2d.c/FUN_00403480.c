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
  
  if (_DAT_007303b8 != 0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x995;
    FUN_004e4330("mapFrameBuffer - already mapped!");
  }
  if (param_5 == 0) {
    iVar1 = param_2 * param_4 >> 0x1f;
    param_5 = (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((param_4 != 8) && (param_4 != 0x10)) && (param_4 != 0x20)) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99d;
    FUN_004e4330("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = param_2 * param_4 >> 0x1f;
  if ((int)((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) <
      (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99e;
    FUN_004e4330("mapFrameBuffer - invalid stride");
  }
  if ((param_2 < 1) || (param_3 < 1)) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x99f;
    FUN_004e4330("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < param_3) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x9a0;
    FUN_004e4330("mapFrameBuffer - ySize too big!");
  }
  if (param_1 == 0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x9a1;
    FUN_004e4330("mapFrameBuffer - invalid buffer!");
  }
  _DAT_007303b8 = DAT_005fba18;
  _DAT_007303bc = DAT_005fba1c;
  _DAT_007303c0 = _DAT_01c6b5a8;
  DAT_005fba18 = param_2;
  _DAT_007303c4 = _DAT_01c6b5ac;
  _DAT_007303c8 = _DAT_01c6b5b0;
  DAT_005fba1c = param_3;
  _DAT_007303cc = _DAT_01c6b5b4;
  _DAT_01c6b5a8 = 0;
  _DAT_007303d0 = DAT_005fba20;
  _DAT_01c6b5ac = 0;
  _DAT_007303d4 = _DAT_01c5faec;
  _DAT_007303d8 = _DAT_01c5faf0 - _DAT_01c5faec;
  DAT_005fba20 = param_4;
  iVar1 = param_3 + -1;
  _DAT_01c6b5b0 = param_2 + -1;
  _DAT_01c6b5b4 = iVar1;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      *(int *)(&DAT_01c5faec + iVar1) = param_1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + param_5;
    } while (iVar1 < param_3 * 4);
  }
  return iVar1;
}
