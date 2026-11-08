// Name: FUN_004ca9c0
// Address: 004ca9c0
// Address Range: [[004ca9c0, 004caa56]]
// Convention: unknown
// Signature: void FUN_004ca9c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca9c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004caa60(param_1);
  iVar1 = FUN_005b8580(*param_1 * param_1[1] * 4);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\ground.cpp";
    _DAT_01d046a4 = 0xe1;
    FUN_004e4500("CGround::init - Out of memory");
  }
  iVar2 = FUN_005b8be2(0x6d64);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_00573490(iVar2);
  }
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\ground.cpp";
  _DAT_01d046a4 = 0xe6;
  FUN_004e4500("CGround::init - Out of memory2");
  return;
}
