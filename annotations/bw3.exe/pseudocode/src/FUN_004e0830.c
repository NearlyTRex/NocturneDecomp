// Name: FUN_004e0830
// Address: 004e0830
// Address Range: [[004e0830, 004e0a0a]]
// Convention: unknown
// Signature: void FUN_004e0830(int param_1)

#include "nocturne.h"

void FUN_004e0830(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_d4 [200];
  
  FUN_0040c280(param_1);
  pcVar3 = acStack_d4;
  if (DAT_007df9b8 == 1) {
    FUN_0040b680(acStack_d4,"?modelName" + 1);
    FUN_004625f0(param_1 + 0x158,acStack_d4);
  }
  else {
    pcVar2 = (char *)(param_1 + 0x1d0);
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    FUN_0040b680(acStack_d4,"modelName");
  }
  FUN_0040b8b0(param_1 + 0x2d8,"leverType");
  FUN_0040b680(param_1 + 0x2e0,"onEvent");
  FUN_0040b680(param_1 + 0x344,"offEvent");
  FUN_0040b680(param_1 + 0x3a8,"sound");
  FUN_0040b830(param_1 + 0x2dc,"param");
  if (1 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x40c,"momentaryFlag");
  }
  if (2 < 0x00000008) {
    FUN_0040b930(param_1 + 0x410,"linkedLever");
  }
  if (3 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x414,"endVertexIndex");
  }
  if (4 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x418,"moving");
    FUN_0040b830(param_1 + 0x41c,"moveToPct");
  }
  if (5 < 0x00000008) {
    FUN_0040c0c0(param_1 + 0x420,"rules");
  }
  if (6 < 0x00000008) {
    FUN_0040b8b0(param_1 + 0x80c,"allowedSides");
  }
  if (0x00000008 < 8) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x810,"enableCollision");
  return;
}
