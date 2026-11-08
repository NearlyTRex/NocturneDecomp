// Name: FUN_0053a740
// Address: 0053a740
// Address Range: [[0053a740, 0053aaf5]]
// Convention: unknown
// Signature: void FUN_0053a740(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053a740(int param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  uint local_18;
  int local_14;
  
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b440(param_1 + 0x354,"toStartEvent");
  FUN_0040b440(param_1 + 0x3b8,"toEndEvent");
  FUN_0040b440(param_1 + 0x41c,"stopEvent");
  FUN_0040b440(param_1 + 0x480,"startSound");
  FUN_0040b440(param_1 + 0x494,"stopSound");
  FUN_0040b440(param_1 + 0x4a8,"activeSound");
  FUN_0040b440(param_1 + 0x2f0,"courseFilename");
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    FUN_0040b1c0(param_1 + 0x31c,"startPos");
    FUN_0040b3a0(param_1 + 0x334,"origOrient");
    FUN_0040b1c0(param_1 + 0x328,"endPos");
    FUN_0040b3a0(param_1 + 0x344,"endOrient");
  }
  FUN_0040b670(param_1 + 0x2d4,"state");
  FUN_0040b5f0(param_1 + 0x2dc,"param");
  FUN_0040b5f0(param_1 + 0x2ec,"travelTimeToStart");
  if (0x0000000B < 7) {
    *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2ec);
  }
  else {
    FUN_0040b5f0(param_1 + 0x2e8,"travelTimeToEnd");
  }
  FUN_0040b670(param_1 + 0x2d8,"groundType");
  if (1 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x4c0,"oneShot");
  }
  if (2 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x4c4,"blockVirtualDirectorFlag");
  }
  if (3 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x4c8,"renderInBackgroundWhenNotMovingFlag");
  }
  if (4 < 0x0000000B) {
    FUN_0040b440(param_1 + 0x4cc,"cameraWhileMoving");
  }
  if (5 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x50c,"plotAsBoxInShadow");
  }
  if (7 < 0x0000000B) {
    FUN_0040b5f0(param_1 + 0x2e0,"goalParam");
    FUN_0040b5f0(param_1 + 0x2e4,"currentMovementRate");
    if (DAT_007c3038 == 1) {
      FUN_0040b670(&local_1c,"attachCount");
      if (10 < local_1c) {
        _DAT_01d1d400 = "..\\core\\platfrm.cpp";
        _DAT_01d1d404 = 0x316;
        FUN_005030e0("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      iVar1 = param_1;
      if (0 < local_1c) {
        do {
          FUN_0040b6f0(&local_18,"attach actor");
          *(uint *)(iVar1 + 0x51c) = local_18;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x34;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x51c) != 0) {
          local_14 = local_14 + 1;
        }
        iVar1 = iVar1 + 0x34;
      } while (iVar1 != param_1 + 0x208);
      iVar2 = 0;
      FUN_0040b670(&local_14,"attachCount");
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x51c) != 0) {
          FUN_0040b6f0(iVar2 * 0x34 + param_1 + 0x51c,"attach actor");
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar2 < 10);
    }
  }
  if (8 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x510,"pushFlag");
  }
  if (9 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x514,"recomputeFog");
  }
  if (10 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x518,"plotInShadowFlag");
    return;
  }
  return;
}
