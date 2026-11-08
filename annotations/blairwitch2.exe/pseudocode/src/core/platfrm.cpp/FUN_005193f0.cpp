// Name: FUN_005193f0
// Address: 005193f0
// Address Range: [[005193f0, 005197a5]]
// Convention: unknown
// Signature: void FUN_005193f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005193f0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  uint local_18;
  int local_14;
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"?modelName" + 1);
  FUN_0040b730(param_1 + 0x4b0,"toStartEvent");
  FUN_0040b730(param_1 + 0x514,"toEndEvent");
  FUN_0040b730(param_1 + 0x578,"stopEvent");
  FUN_0040b730(param_1 + 0x5dc,"startSound");
  FUN_0040b730(param_1 + 0x5f0,"stopSound");
  FUN_0040b730(param_1 + 0x604,"activeSound");
  FUN_0040b730(param_1 + 0x44c,"courseFilename");
  if (*(char *)(param_1 + 0x44c) == '\0') {
    FUN_0040b4b0(param_1 + 0x478,"startPos");
    FUN_0040b690(param_1 + 0x490,"origOrient");
    FUN_0040b4b0(param_1 + 0x484,"endPos");
    FUN_0040b690(param_1 + 0x4a0,"endOrient");
  }
  FUN_0040b960(param_1 + 0x430,"state");
  FUN_0040b8e0(param_1 + 0x438,"param");
  FUN_0040b8e0(param_1 + 0x448,"travelTimeToStart");
  if (0x0000000B < 7) {
    *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x448);
  }
  else {
    FUN_0040b8e0(param_1 + 0x444,"travelTimeToEnd");
  }
  FUN_0040b960(param_1 + 0x434,"groundType");
  if (1 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x61c,"oneShot");
  }
  if (2 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x620,"blockVirtualDirectorFlag");
  }
  if (3 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x624,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < 0x0000000B) {
    FUN_0040b730(param_1 + 0x628,"cameraWhileMoving");
  }
  if (5 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x668,"plotAsBoxInShadow");
  }
  if (7 < 0x0000000B) {
    FUN_0040b8e0(param_1 + 0x43c,"goalParam");
    FUN_0040b8e0(param_1 + 0x440,"currentMovementRate");
    if (DAT_007bc038 == 1) {
      FUN_0040b960(&local_1c,"attachCount");
      if (10 < local_1c) {
        _DAT_01d046a0 = "..\\core\\platfrm.cpp";
        _DAT_01d046a4 = 0x316;
        FUN_004e4500("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      iVar1 = param_1;
      if (0 < local_1c) {
        do {
          FUN_0040b9e0(&local_18,"attach actor");
          *(uint *)(iVar1 + 0x678) = local_18;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x34;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x678) != 0) {
          local_14 = local_14 + 1;
        }
        iVar1 = iVar1 + 0x34;
      } while (iVar1 != param_1 + 0x208);
      iVar2 = 0;
      FUN_0040b960(&local_14,"attachCount");
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x678) != 0) {
          FUN_0040b9e0(iVar2 * 0x34 + param_1 + 0x678,"attach actor");
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x66c,"pushFlag");
  }
  if (9 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x670,"recomputeFog");
  }
  if (10 < 0x0000000B) {
    FUN_0040b960(param_1 + 0x674,"plotInShadowFlag");
    return;
  }
  return;
}
