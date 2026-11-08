// Name: FUN_00512420
// Address: 00512420
// Address Range: [[00512420, 005127e5]]
// Convention: unknown
// Signature: int FUN_00512420(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00512420(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"?modelName" + 1);
  FUN_0040b680(param_1 + 0x354,"toStartEvent");
  FUN_0040b680(param_1 + 0x3b8,"toEndEvent");
  FUN_0040b680(param_1 + 0x41c,"stopEvent");
  FUN_0040b680(param_1 + 0x480,"startSound");
  FUN_0040b680(param_1 + 0x494,"stopSound");
  FUN_0040b680(param_1 + 0x4a8,"activeSound");
  FUN_0040b680(param_1 + 0x2f0,"courseFilename");
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    FUN_0040b400(param_1 + 0x31c,"startPos");
    FUN_0040b5e0(param_1 + 0x334,"origOrient");
    FUN_0040b400(param_1 + 0x328,"endPos");
    FUN_0040b5e0(param_1 + 0x344,"endOrient");
  }
  FUN_0040b8b0(param_1 + 0x2d4,"state");
  FUN_0040b830(param_1 + 0x2dc,"param");
  FUN_0040b830(param_1 + 0x2ec,"travelTimeToStart");
  if (0x0000000B < 7) {
    *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2ec);
  }
  else {
    FUN_0040b830(param_1 + 0x2e8,"travelTimeToEnd");
  }
  iVar1 = FUN_0040b8b0(param_1 + 0x2d8,"groundType");
  if (1 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x4c0,"oneShot");
  }
  if (2 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x4c4,"blockVirtualDirectorFlag");
  }
  if (3 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x4c8,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < 0x0000000B) {
    iVar1 = FUN_0040b680(param_1 + 0x4cc,"cameraWhileMoving");
  }
  if (5 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x50c,"plotAsBoxInShadow");
  }
  if (7 < 0x0000000B) {
    FUN_0040b830(param_1 + 0x2e0,"goalParam");
    FUN_0040b830(param_1 + 0x2e4,"currentMovementRate");
    if (DAT_007df9b8 == 1) {
      iVar1 = FUN_0040b8b0(&iStack_1c,"attachCount");
      if (10 < iStack_1c) {
        _DAT_01d71de0 = "..\\core\\platfrm.cpp";
        _DAT_01d71de4 = 0x316;
        iVar1 = FUN_004e4330("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      iVar3 = param_1;
      if (0 < iStack_1c) {
        do {
          FUN_0040b930(&iStack_18,"attach actor");
          *(int *)(iVar3 + 0x51c) = iStack_18;
          iVar2 = iVar2 + 1;
          iVar1 = iStack_18;
          iVar3 = iVar3 + 0x34;
        } while (iVar2 < iStack_1c);
      }
    }
    else {
      iStack_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x51c) != 0) {
          iStack_14 = iStack_14 + 1;
        }
        iVar1 = iVar1 + 0x34;
      } while (iVar1 != param_1 + 0x208);
      iVar2 = 0;
      FUN_0040b8b0(&iStack_14,"attachCount");
      iVar3 = param_1;
      do {
        iVar1 = iVar2 * 0x34;
        if (*(int *)(iVar3 + 0x51c) != 0) {
          iVar1 = FUN_0040b930(iVar1 + param_1 + 0x51c,"attach actor");
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x510,"pushFlag");
  }
  if (9 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x514,"recomputeFog");
  }
  if (10 < 0x0000000B) {
    iVar1 = FUN_0040b8b0(param_1 + 0x518,"plotInShadowFlag");
    return iVar1;
  }
  return iVar1;
}
