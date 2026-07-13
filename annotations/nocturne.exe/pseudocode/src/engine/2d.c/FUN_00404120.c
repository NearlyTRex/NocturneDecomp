// Name: FUN_00404120
// Address: 00404120
// Address Range: [[00404120, 00404339]]
// Convention: unknown
// Signature: int FUN_00404120(int param_1,int param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404120(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (DAT_006b023c != 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x998;
    FUN_004c8440("mapFrameBuffer - already mapped!");
  }
  if (param_5 == 0) {
    iVar1 = param_2 * param_4 >> 0x1f;
    param_5 = (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3;
  }
  if (((param_4 != 8) && (param_4 != 0x10)) && (param_4 != 0x20)) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x9a0;
    FUN_004c8440("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = param_2 * param_4 >> 0x1f;
  if ((int)((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) <
      (int)((param_2 * param_4 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x9a1;
    FUN_004c8440("mapFrameBuffer - invalid stride");
  }
  if ((param_2 < 1) || (param_3 < 1)) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x9a2;
    FUN_004c8440("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < param_3) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x9a3;
    FUN_004c8440("mapFrameBuffer - ySize too big!");
  }
  if (param_1 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x9a4;
    FUN_004c8440("mapFrameBuffer - invalid buffer!");
  }
  DAT_006b023c = DAT_005b761c;
  DAT_006b0240 = DAT_005b7620;
  DAT_006b0244 = _DAT_01c00c58;
  DAT_005b761c = param_2;
  DAT_006b0248 = _DAT_01c00c5c;
  DAT_006b024c = _DAT_01c00c60;
  DAT_005b7620 = param_3;
  DAT_006b0250 = _DAT_01c00c64;
  _DAT_01c00c58 = 0;
  DAT_006b0254 = DAT_005b7624;
  _DAT_01c00c5c = 0;
  DAT_006b0258 = _DAT_01bd2fa0;
  DAT_006b025c = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  DAT_005b7624 = param_4;
  iVar1 = param_3 + -1;
  _DAT_01c00c60 = param_2 + -1;
  _DAT_01c00c64 = iVar1;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      *(int *)(&DAT_01bd2fa0 + iVar1) = param_1;
      iVar1 = iVar1 + 4;
      param_1 = param_1 + param_5;
    } while (iVar1 < param_3 * 4);
  }
  return iVar1;
}
