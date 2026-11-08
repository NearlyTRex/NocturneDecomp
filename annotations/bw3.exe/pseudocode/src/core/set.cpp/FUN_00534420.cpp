// Name: FUN_00534420
// Address: 00534420
// Address Range: [[00534420, 005346ad]]
// Convention: unknown
// Signature: void FUN_00534420(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534420(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_00508960("Initializing scene",0);
  FUN_004e0000(0x01D70AB8,uVar1);
  FUN_0045c470();
  FUN_004596c0(0x01548F90);
  _DAT_0203ad1c = 0;
  param_1[0x56b32] = 0;
  FUN_00448ca0(0x2038f4c);
  FUN_004503f0(0x2038f4c,param_1 + 0x56b10);
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
  FUN_0044f680(0x2038f4c,param_1[0x53454]);
  do {
    if (*(int *)(&DAT_0203a418 + iVar4) != 0) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0x3f1;
      FUN_004e4330("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x180);
  iVar4 = 0;
  _DAT_0203a414 = 0;
  piVar3 = param_1;
  if (0 < param_1[0x668b]) {
    do {
      if (piVar3[0x668c] == 0) {
        uVar1 = FUN_00542940(param_1 + iVar4 * 0x626 + 0x668c);
        *(uint *)(&DAT_0203a418 + _DAT_0203a414 * 4) = uVar1;
        FUN_00542aa0(param_1 + iVar4 * 0x626 + 0x668c,uVar1);
        _DAT_0203a414 = _DAT_0203a414 + 1;
        if (0x60 < _DAT_0203a414) {
          _DAT_01d71de0 = "..\\core\\set.cpp";
          _DAT_01d71de4 = 0x408;
          FUN_004e4330("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x626;
    } while (iVar4 < param_1[0x668b]);
  }
  iVar4 = 0;
  if (0 < _DAT_0203a414) {
    iVar2 = 0;
    do {
      uVar1 = *(uint *)(&DAT_0203a418 + iVar2);
      FUN_0045c530(uVar1,0);
      FUN_0045d070(uVar1);
      FUN_00533b80(param_1,0x461c3f9a,0);
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 1;
      FUN_0045c7e0(uVar1,0);
    } while (iVar4 < _DAT_0203a414);
  }
  param_1[0x56bae] = -1;
  param_1[0x56baf] = -1;
  iVar4 = 0;
  _DAT_0203a598 = 0;
  _DAT_0203b3e8 = 0;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  param_1[0x56bb0] = 0;
  FUN_005418d0(param_1);
  if (0 < *param_1) {
    piVar3 = param_1 + 0x41;
    piVar5 = param_1;
    do {
      iVar4 = iVar4 + 1;
      iVar2 = FUN_00541a20(param_1,piVar3);
      piVar5[0x68] = iVar2;
      piVar3 = piVar3 + 0x69;
      piVar5 = piVar5 + 0x69;
    } while (iVar4 < *param_1);
  }
  FUN_0057d050(0x02D0C1A0,param_1[0x585a0]);
  return;
}
