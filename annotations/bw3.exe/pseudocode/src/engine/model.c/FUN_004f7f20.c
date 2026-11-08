// Name: FUN_004f7f20
// Address: 004f7f20
// Address Range: [[004f7f20, 004f80eb]]
// Convention: unknown
// Signature: int * FUN_004f7f20(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004f7f20(char *param_1)

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
    if (*pcVar6 == '.') goto LAB_004f7f46;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004f7f46;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004f7f46:
  if (pcVar5 != (char *)0x0) {
    iVar1 = FUN_005a4120(pcVar5[1]);
    if (iVar1 == 0x54) {
      piVar3 = (int *)FUN_0041ac60(param_1);
      return piVar3;
    }
  }
  iVar1 = FUN_004657f0("models",param_1);
  if (iVar1 == 0) {
    FUN_005a28c0(local_5c,"Unable to get file size: %s",param_1);
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0xf0;
    FUN_004e4330(local_5c);
  }
  iVar2 = FUN_004659c0("models",param_1,&DAT_005c8f88);
  if (iVar2 == 0) {
    FUN_005a28c0(local_5c,"Unable to open model: %s",param_1);
    _DAT_01d71de4 = 0xf5;
    _DAT_01d71de0 = "..\\engine\\model.c";
    FUN_004e4330(local_5c);
  }
  piVar3 = (int *)FUN_005a3650(iVar1);
  if (piVar3 == (int *)0x0) {
    FUN_005a28c0(local_5c,"Out of model memory: %s",param_1);
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x100;
    FUN_004e4330(local_5c);
  }
  iVar4 = FUN_005a3890(piVar3,1,iVar1,iVar2);
  if (iVar4 != iVar1) {
    FUN_005a28c0(local_5c,"Model file read error: %s",param_1);
    _DAT_01d71de4 = 0x107;
    _DAT_01d71de0 = "..\\engine\\model.c";
    FUN_004e4330(local_5c);
  }
  FUN_005a3a90(iVar2);
  if ((*piVar3 != 0x14) && (*piVar3 != 0x20)) {
    FUN_005a28c0(local_5c,"Invalid model: %s",param_1);
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x10e;
    FUN_004e4330(local_5c);
  }
  return piVar3;
}
