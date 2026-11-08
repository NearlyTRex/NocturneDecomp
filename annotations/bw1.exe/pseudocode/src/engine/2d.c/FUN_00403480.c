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
  
  if (_DAT_00713a38 != 0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x995;
    FUN_005030e0("mapFrameBuffer - already mapped!");
  }
  if (param_5 == 0) {
    iVar1 = param_2 * param_4 >> 0x1f;
    param_5 = (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((param_4 != 8) && (param_4 != 0x10)) && (param_4 != 0x20)) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99d;
    FUN_005030e0("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = param_2 * param_4 >> 0x1f;
  if ((int)((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) <
      (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99e;
    FUN_005030e0("mapFrameBuffer - invalid stride");
  }
  if ((param_2 < 1) || (param_3 < 1)) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x99f;
    FUN_005030e0("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < param_3) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x9a0;
    FUN_005030e0("mapFrameBuffer - ySize too big!");
  }
  if (param_1 == 0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x9a1;
    FUN_005030e0("mapFrameBuffer - invalid buffer!");
  }
  _DAT_00713a38 = DAT_0061b498;
  _DAT_00713a3c = DAT_0061b49c;
  _DAT_00713a40 = _DAT_01c4f008;
  DAT_0061b498 = param_2;
  _DAT_00713a44 = _DAT_01c4f00c;
  _DAT_00713a48 = _DAT_01c4f010;
  DAT_0061b49c = param_3;
  _DAT_00713a4c = _DAT_01c4f014;
  _DAT_01c4f008 = 0;
  _DAT_00713a50 = DAT_0061b4a0;
  _DAT_01c4f00c = 0;
  _DAT_00713a54 = _DAT_01c4354c;
  _DAT_00713a58 = _DAT_01c43550 - _DAT_01c4354c;
  DAT_0061b4a0 = param_4;
  iVar1 = param_3 + -1;
  _DAT_01c4f010 = param_2 + -1;
  _DAT_01c4f014 = iVar1;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      *(int *)(&DAT_01c4354c + iVar1) = param_1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + param_5;
    } while (iVar1 < param_3 * 4);
  }
  return iVar1;
}
