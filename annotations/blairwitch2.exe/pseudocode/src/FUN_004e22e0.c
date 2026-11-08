// Name: FUN_004e22e0
// Address: 004e22e0
// Address Range: [[004e22e0, 004e24ba]]
// Convention: unknown
// Signature: void FUN_004e22e0(int param_1)

#include "nocturne.h"

void FUN_004e22e0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_d4 [200];
  
  FUN_0040c330(param_1);
  pcVar3 = acStack_d4;
  if (DAT_007bc038 == 1) {
    FUN_0040b730(acStack_d4,"?modelName" + 1);
    FUN_0044fd70(param_1 + 0x2b4,acStack_d4);
  }
  else {
    pcVar2 = (char *)(param_1 + 0x32c);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    FUN_0040b730(acStack_d4,"modelName");
  }
  FUN_0040b960(param_1 + 0x434,"leverType");
  FUN_0040b730(param_1 + 0x43c,"onEvent");
  FUN_0040b730(param_1 + 0x4a0,"offEvent");
  FUN_0040b730(param_1 + 0x504,"sound");
  FUN_0040b8e0(param_1 + 0x438,"param");
  if (1 < 0x00000008) {
    FUN_0040b960(param_1 + 0x568,"momentaryFlag");
  }
  if (2 < 0x00000008) {
    FUN_0040b9e0(param_1 + 0x56c,"linkedLever");
  }
  if (3 < 0x00000008) {
    FUN_0040b960(param_1 + 0x570,"endVertexIndex");
  }
  if (4 < 0x00000008) {
    FUN_0040b960(param_1 + 0x574,"moving");
    FUN_0040b8e0(param_1 + 0x578,"moveToPct");
  }
  if (5 < 0x00000008) {
    FUN_0040c170(param_1 + 0x57c,"rules");
  }
  if (6 < 0x00000008) {
    FUN_0040b960(param_1 + 0x968,"allowedSides");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b960(param_1 + 0x96c,"enableCollision");
  return;
}
