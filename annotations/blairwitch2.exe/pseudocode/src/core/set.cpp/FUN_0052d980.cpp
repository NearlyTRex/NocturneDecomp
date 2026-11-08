// Name: FUN_0052d980
// Address: 0052d980
// Address Range: [[0052d980, 0052dc0d]]
// Convention: unknown
// Signature: void FUN_0052d980(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d980(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = FUN_0050fe80("Initializing scene",0);
  FUN_004e1600(0x01D03000,uVar1);
  FUN_00449f60();
  FUN_00447610(0x015111A8);
  _DAT_01fc9608 = 0;
  param_1[0x56b32] = 0;
  FUN_0055b1f0();
  FUN_0043b4c0(0x1fc7838);
  FUN_00442bf0(0x1fc7838,param_1 + 0x56b10);
  param_1[0x56b19] = param_1[0x56b10];
  param_1[0x56b1a] = param_1[0x56b11];
  param_1[0x56b1b] = param_1[0x56b12];
  if (param_1 + 0x56b1c != param_1 + 0x56b13) {
    param_1[0x56b1c] = param_1[0x56b13];
    param_1[0x56b1d] = param_1[0x56b14];
    param_1[0x56b1e] = param_1[0x56b15];
  }
  param_1[0x56b1f] = param_1[0x56b16];
  param_1[0x56b20] = param_1[0x56b17];
  param_1[0x56b21] = param_1[0x56b18];
  iVar2 = 0;
  FUN_00441e80(0x1fc7838,param_1[0x53454]);
  do {
    if (*(int *)(&DAT_01fc8d04 + iVar2) != 0) {
      _DAT_01d046a0 = "..\\core\\set.cpp";
      _DAT_01d046a4 = 0x3e4;
      FUN_004e4500("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x180);
  iVar2 = 0;
  _DAT_01fc8d00 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x668b]) {
    do {
      if (piVar4[0x668c] == 0) {
        uVar1 = FUN_0053b6b0(param_1 + iVar2 * 0x626 + 0x668c);
        *(uint *)(&DAT_01fc8d04 + _DAT_01fc8d00 * 4) = uVar1;
        FUN_0053b810(param_1 + iVar2 * 0x626 + 0x668c,uVar1);
        _DAT_01fc8d00 = _DAT_01fc8d00 + 1;
        if (0x60 < _DAT_01fc8d00) {
          _DAT_01d046a0 = "..\\core\\set.cpp";
          _DAT_01d046a4 = 0x3fb;
          FUN_004e4500("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x626;
    } while (iVar2 < param_1[0x668b]);
  }
  iVar2 = 0;
  if (0 < _DAT_01fc8d00) {
    iVar3 = 0;
    do {
      uVar1 = *(uint *)(&DAT_01fc8d04 + iVar3);
      FUN_0044a020(uVar1,0);
      FUN_0044ab60(uVar1);
      FUN_0052d0e0(param_1,0x461c3f9a,0);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      FUN_0044a2d0(uVar1,0);
    } while (iVar2 < _DAT_01fc8d00);
  }
  param_1[0x56bae] = -1;
  param_1[0x56baf] = -1;
  iVar2 = 0;
  _DAT_01fc8e84 = 0;
  _DAT_01fc9cd4 = 0;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  param_1[0x56bb0] = 0;
  FUN_0053a610(param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 0x41;
    piVar5 = param_1;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = FUN_0053a760(param_1,piVar4);
      piVar5[0x68] = iVar3;
      piVar4 = piVar4 + 0x69;
      piVar5 = piVar5 + 0x69;
    } while (iVar2 < *param_1);
  }
  FUN_0058b470(0x02661F80,param_1[0x5859f]);
  return;
}
