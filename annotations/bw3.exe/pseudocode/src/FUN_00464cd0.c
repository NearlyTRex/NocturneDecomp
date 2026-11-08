// Name: FUN_00464cd0
// Address: 00464cd0
// Address Range: [[00464cd0, 0046500c]]
// Convention: unknown
// Signature: void FUN_00464cd0(int param_1)

#include "nocturne.h"

void FUN_00464cd0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"?modelName" + 1);
  FUN_0040b8b0(param_1 + 0x2d8,"doorType");
  FUN_0040b8b0(param_1 + 0x2dc,"doorSide");
  FUN_0040b8b0(param_1 + 0x2e0,"doorState");
  FUN_0040b8b0(param_1 + 0x2e4,"doorSwing");
  FUN_0040b680(param_1 + 0x2e8,"openEvent");
  FUN_0040b680(param_1 + 0x34c,"closeEvent");
  FUN_0040b680(param_1 + 0x864,"openSound");
  FUN_0040b680(param_1 + 0x8c8,"closeSound");
  FUN_0040b8b0(param_1 + 0x990,"keyMask");
  FUN_0040b400(param_1 + 0x994,"origPos");
  FUN_0040b400(param_1 + 0x9a0,"origOrient");
  FUN_0040b830(param_1 + 0x9ac,"param");
  FUN_0040b830(param_1 + 0x9b0,"maxParam");
  FUN_0040b830(param_1 + 0x9b4,"openSpeed");
  FUN_0040b830(param_1 + 0x9b8,"closeSpeed");
  if (1 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x2d4,"groundType");
  }
  if (2 < 0x0000000D) {
    FUN_0040b680(param_1 + 0x3b0,"eventToTriggerWhenOpen");
    FUN_0040b680(param_1 + 0x414,"eventToTriggerWhenClosed");
  }
  if (3 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x9c8,"oneShot");
  }
  if (0x0000000D < 7) {
    if (4 < 0x0000000D) {
      FUN_0040b680(param_1 + 0x670,"scriptOpenEvent");
      if (*(char *)(param_1 + 0x670) == '\0') {
        *(uint *)(param_1 + 0x478) = 0;
      }
      else {
        pcVar2 = &DAT_005bbe89;
        pcVar3 = (char *)(param_1 + 0x47c);
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)(param_1 + 0x478) = 1;
      }
    }
  }
  else {
    FUN_0040c0c0(param_1 + 0x478,"openRules");
  }
  if (5 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x9d0,"blockVirtualDirectorFlag");
  }
  if (7 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x9d4,"plotAsBoxInShadow");
  }
  if (8 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x9d8,"allowedSides");
  }
  if (9 < 0x0000000D) {
    FUN_0040b8b0(param_1 + 0x9dc,"allowBulletHoles");
  }
  if (10 < 0x0000000D) {
    FUN_0040b680(param_1 + 0x92c,"lockedSound");
  }
  if (0xb < 0x0000000D) {
    FUN_0040b680(param_1 + 0x9e4,"shakeMeEvent");
    FUN_0040b830(param_1 + 0x9e0,"shakeMeStrength");
  }
  if (0x0000000D < 0xd) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xa48,"handleVertexIndex");
  return;
}
