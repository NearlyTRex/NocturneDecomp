// Name: FUN_0054ec60
// Address: 0054ec60
// Address Range: [[0054ec60, 0054eeed]]
// Convention: unknown
// Signature: void FUN_0054ec60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054ec60(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00531090("Initializing scene",0);
  FUN_004fe9c0(0x01D1BD1C,uVar1);
  FUN_00462760();
  FUN_0045d770(0x0152C72C);
  _DAT_01fe55bc = 0;
  param_1[0x56b32] = 0;
  FUN_0044cb60(0x1fe37ec);
  FUN_004542a0(0x1fe37ec,param_1 + 0x56b10);
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
  iVar4 = 0;
  FUN_00453540(0x1fe37ec,param_1[0x53454]);
  do {
    if (*(int *)(&DAT_01fe4cb8 + iVar4) != 0) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0x3e3;
      FUN_005030e0("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  _DAT_01fe4cb4 = 0;
  piVar3 = param_1;
  if (0 < param_1[0x668b]) {
    do {
      if (piVar3[0x668c] == 0) {
        uVar1 = FUN_0055cf80(param_1 + iVar4 * 0x626 + 0x668c);
        *(uint *)(&DAT_01fe4cb8 + _DAT_01fe4cb4 * 4) = uVar1;
        FUN_0055d0e0(param_1 + iVar4 * 0x626 + 0x668c,uVar1);
        _DAT_01fe4cb4 = _DAT_01fe4cb4 + 1;
        if (0x60 < _DAT_01fe4cb4) {
          _DAT_01d1d400 = "..\\core\\set.cpp";
          _DAT_01d1d404 = 0x3fa;
          FUN_005030e0("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x626;
    } while (iVar4 < param_1[0x668b]);
  }
  iVar4 = 0;
  if (0 < _DAT_01fe4cb4) {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(&DAT_01fe4cb8 + iVar2);
      FUN_00462820(uVar1,0);
      FUN_00463360(uVar1);
      FUN_0054e3c0(param_1,0x461c3f9a,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      FUN_00462ad0(uVar1,0);
    } while (iVar4 < _DAT_01fe4cb4);
  }
  param_1[0x56bae] = -1;
  param_1[0x56baf] = -1;
  iVar4 = 0;
  _DAT_01fe4e38 = 0;
  _DAT_01fe5c88 = 0;
  _DAT_01fe55d0 = 0;
  _DAT_01fe5764 = 0;
  param_1[0x56bb0] = 0;
  FUN_0055bf10(param_1);
  if (0 < *param_1) {
    piVar3 = param_1 + 0x41;
    piVar5 = param_1;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = FUN_0055c060(param_1,piVar3);
      piVar5[0x68] = iVar2;
      piVar3 = piVar3 + 0x69;
      piVar5 = piVar5 + 0x69;
    } while (iVar4 < *param_1);
  }
  FUN_005aefc0(0x02C997C0,param_1[0x585a0]);
  return;
}
