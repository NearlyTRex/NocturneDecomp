// Name: FUN_0045ff80
// Address: 0045ff80
// Address Range: [[0045ff80, 004602bc]]
// Convention: unknown
// Signature: void FUN_0045ff80(int param_1)

#include "nocturne.h"

void FUN_0045ff80(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"?modelName" + 1);
  FUN_0040b960(param_1 + 0x434,"doorType");
  FUN_0040b960(param_1 + 0x438,"doorSide");
  FUN_0040b960(param_1 + 0x43c,"doorState");
  FUN_0040b960(param_1 + 0x440,"doorSwing");
  FUN_0040b730(param_1 + 0x444,"openEvent");
  FUN_0040b730(param_1 + 0x4a8,"closeEvent");
  FUN_0040b730(param_1 + 0x9c0,"openSound");
  FUN_0040b730(param_1 + 0xa24,"closeSound");
  FUN_0040b960(param_1 + 0xaec,"keyMask");
  FUN_0040b4b0(param_1 + 0xaf0,"origPos");
  FUN_0040b4b0(param_1 + 0xafc,"origOrient");
  FUN_0040b8e0(param_1 + 0xb08,"param");
  FUN_0040b8e0(param_1 + 0xb0c,"maxParam");
  FUN_0040b8e0(param_1 + 0xb10,"openSpeed");
  FUN_0040b8e0(param_1 + 0xb14,"closeSpeed");
  if (1 < 0x0000000D) {
    FUN_0040b960(param_1 + 0x430,"groundType");
  }
  if (2 < 0x0000000D) {
    FUN_0040b730(param_1 + 0x50c,"eventToTriggerWhenOpen");
    FUN_0040b730(param_1 + 0x570,"eventToTriggerWhenClosed");
  }
  if (3 < 0x0000000D) {
    FUN_0040b960(param_1 + 0xb24,"oneShot");
  }
  if (0x0000000D < 7) {
    if (4 < 0x0000000D) {
      FUN_0040b730(param_1 + 0x7cc,"scriptOpenEvent");
      if (*(char *)(param_1 + 0x7cc) == '\0') {
        *(uint *)(param_1 + 0x5d4) = 0;
      }
      else {
        pcVar2 = &DAT_005d0b16;
        pcVar3 = (char *)(param_1 + 0x5d8);
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)(param_1 + 0x5d4) = 1;
      }
    }
  }
  else {
    FUN_0040c170(param_1 + 0x5d4,"openRules");
  }
  if (5 < 0x0000000D) {
    FUN_0040b960(param_1 + 0xb2c,"blockVirtualDirectorFlag");
  }
  if (7 < 0x0000000D) {
    FUN_0040b960(param_1 + 0xb30,"plotAsBoxInShadow");
  }
  if (8 < 0x0000000D) {
    FUN_0040b960(param_1 + 0xb34,"allowedSides");
  }
  if (9 < 0x0000000D) {
    FUN_0040b960(param_1 + 0xb38,"allowBulletHoles");
  }
  if (10 < 0x0000000D) {
    FUN_0040b730(param_1 + 0xa88,"lockedSound");
  }
  if (0xb < 0x0000000D) {
    FUN_0040b730(param_1 + 0xb40,"shakeMeEvent");
    FUN_0040b8e0(param_1 + 0xb3c,"shakeMeStrength");
  }
  if (0x0000000D < 0xd) {
    return;
  }
  FUN_0040b960(param_1 + 0xba4,"handleVertexIndex");
  return;
}
