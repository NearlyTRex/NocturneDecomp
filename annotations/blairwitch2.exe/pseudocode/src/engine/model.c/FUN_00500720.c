// Name: FUN_00500720
// Address: 00500720
// Address Range: [[00500720, 005008eb]]
// Convention: unknown
// Signature: int * FUN_00500720(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00500720(char *param_1)

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
    if (*pcVar6 == '.') goto LAB_00500746;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00500746;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00500746:
  if (pcVar5 != (char *)0x0) {
    iVar1 = FUN_005b8e40(pcVar5[1]);
    if (iVar1 == 0x54) {
      piVar3 = (int *)FUN_0041a4b0(param_1);
      return piVar3;
    }
  }
  iVar1 = FUN_00460aa0("models",param_1);
  if (iVar1 == 0) {
    FUN_005b7790(local_5c,"Unable to get file size: %s",param_1);
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0xf0;
    FUN_004e4500(local_5c);
  }
  iVar2 = FUN_00460c70("models",param_1,&DAT_005def95);
  if (iVar2 == 0) {
    FUN_005b7790(local_5c,"Unable to open model: %s",param_1);
    _DAT_01d046a4 = 0xf5;
    _DAT_01d046a0 = "..\\engine\\model.c";
    FUN_004e4500(local_5c);
  }
  piVar3 = (int *)FUN_005b8580(iVar1);
  if (piVar3 == (int *)0x0) {
    FUN_005b7790(local_5c,"Out of model memory: %s",param_1);
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x100;
    FUN_004e4500(local_5c);
  }
  iVar4 = FUN_005b87c0(piVar3,1,iVar1,iVar2);
  if (iVar4 != iVar1) {
    FUN_005b7790(local_5c,"Model file read error: %s",param_1);
    _DAT_01d046a4 = 0x107;
    _DAT_01d046a0 = "..\\engine\\model.c";
    FUN_004e4500(local_5c);
  }
  FUN_005b89c0(iVar2);
  if ((*piVar3 != 0x14) && (*piVar3 != 0x20)) {
    FUN_005b7790(local_5c,"Invalid model: %s",param_1);
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x10e;
    FUN_004e4500(local_5c);
  }
  return piVar3;
}
