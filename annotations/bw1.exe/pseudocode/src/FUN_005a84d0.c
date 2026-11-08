// Name: FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8650]]
// Convention: unknown
// Signature: void FUN_005a84d0(int param_1)

#include "nocturne.h"

void FUN_005a84d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,">@modelName" + 2);
  FUN_0040b670(param_1 + 0x938,"tireCount");
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x938)) {
    iVar3 = param_1 + 0x94c;
    iVar2 = param_1 + 0x948;
    iVar4 = param_1 + 0x950;
    do {
      FUN_0040b770(iVar4,0);
      FUN_0040b1c0(param_1 + 0x93c + iVar1 * 0x1b4,"static_bpos");
      FUN_0040b5f0(iVar2,"radius");
      FUN_0040b5f0(iVar3,"width");
      iVar4 = iVar4 + 0x1b4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1b4;
      iVar3 = iVar3 + 0x1b4;
    } while (iVar1 < *(int *)(param_1 + 0x938));
  }
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b5f0(param_1 + 0x102c,"curTime");
    FUN_0040b5f0(param_1 + 0x1030,"totalTime");
    FUN_0040b440(param_1 + 0x1034,"courseName");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b6f0(param_1 + 0x1070,"lastMobsterLeft");
  FUN_0040b6f0(param_1 + 0x1070,"lastMobsterRight");
  return;
}
