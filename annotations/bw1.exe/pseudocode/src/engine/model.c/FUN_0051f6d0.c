// Name: FUN_0051f6d0
// Address: 0051f6d0
// Address Range: [[0051f6d0, 0051f89b]]
// Convention: unknown
// Signature: int * FUN_0051f6d0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0051f6d0(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_5c [80];
  
  pcVar6 = param_1;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0051f6f6;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_0051f6f6;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_0051f6f6:
  if (pcVar5 != (char *)0x0) {
    iVar1 = FUN_005c12b0(pcVar5[1]);
    if (iVar1 == 0x54) {
      piVar3 = (int *)FUN_0041d920(param_1);
      return piVar3;
    }
  }
  iVar1 = FUN_00478fb0("models",param_1);
  if (iVar1 == 0) {
    FUN_005bfb40(local_5c,"Unable to get file size: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0xf0;
    FUN_005030e0(local_5c);
  }
  iVar2 = FUN_00479180("models",param_1,&DAT_005e9fe2);
  if (iVar2 == 0) {
    FUN_005bfb40(local_5c,"Unable to open model: %s",param_1);
    _DAT_01d1d404 = 0xf5;
    _DAT_01d1d400 = "..\\engine\\model.c";
    FUN_005030e0(local_5c);
  }
  piVar3 = (int *)FUN_005c08d0(iVar1);
  if (piVar3 == (int *)0x0) {
    FUN_005bfb40(local_5c,"Out of model memory: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x100;
    FUN_005030e0(local_5c);
  }
  iVar4 = FUN_005c0b10(piVar3,1,iVar1,iVar2);
  if (iVar4 != iVar1) {
    FUN_005bfb40(local_5c,"Model file read error: %s",param_1);
    _DAT_01d1d404 = 0x107;
    _DAT_01d1d400 = "..\\engine\\model.c";
    FUN_005030e0(local_5c);
  }
  FUN_005c0d10(iVar2);
  if ((*piVar3 != 0x14) && (*piVar3 != 0x20)) {
    FUN_005bfb40(local_5c,"Invalid model: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x10e;
    FUN_005030e0(local_5c);
  }
  return piVar3;
}
