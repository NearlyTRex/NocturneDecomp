// Name: FUN_005848a0
// Address: 005848a0
// Address Range: [[005848a0, 00584a20]]
// Convention: unknown
// Signature: void FUN_005848a0(int param_1)

#include "nocturne.h"

void FUN_005848a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,">@modelName" + 2);
  FUN_0040b960(param_1 + 0xa94,"tireCount");
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa94)) {
    iVar3 = param_1 + 0xaa8;
    iVar2 = param_1 + 0xaa4;
    iVar4 = param_1 + 0xaac;
    do {
      FUN_0040ba60(iVar4,0);
      FUN_0040b4b0(param_1 + 0xa98 + iVar1 * 0x1b4,"static_bpos");
      FUN_0040b8e0(iVar2,"radius");
      FUN_0040b8e0(iVar3,"width");
      iVar4 = iVar4 + 0x1b4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1b4;
      iVar3 = iVar3 + 0x1b4;
    } while (iVar1 < *(int *)(param_1 + 0xa94));
  }
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b8e0(param_1 + 0x1188,"curTime");
    FUN_0040b8e0(param_1 + 0x118c,"totalTime");
    FUN_0040b730(param_1 + 0x1190,"courseName");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b9e0(param_1 + 0x11cc,"lastMobsterLeft");
  FUN_0040b9e0(param_1 + 0x11cc,"lastMobsterRight");
  return;
}
