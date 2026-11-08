// Name: FUN_005011a0
// Address: 005011a0
// Address Range: [[005011a0, 005012d9]]
// Convention: unknown
// Signature: char * FUN_005011a0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_005011a0(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte local_60 [80];
  
  iVar2 = FUN_00460c70("models",param_1,&DAT_005df0cd);
  if (iVar2 == 0) {
    FUN_005b7790(local_60,"Unable to open model: %s",param_1);
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2e4;
    FUN_004e4500(local_60);
  }
  pcVar3 = (char *)FUN_005b8580(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    FUN_005b7790(local_60,"Out of partial model mem : %s",param_1);
    _DAT_01d046a4 = 0x2ef;
    _DAT_01d046a0 = "..\\engine\\model.c";
    FUN_004e4500(local_60);
  }
  iVar4 = FUN_005b87c0(pcVar3,1,param_2,iVar2);
  if (iVar4 != param_2) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f4;
    FUN_004e4500("Model read hose");
  }
  FUN_005b89c0(iVar2);
  if ((*pcVar3 != '\x14') && (*pcVar3 != ' ')) {
    _DAT_01d046a0 = "..\\engine\\model.c";
    _DAT_01d046a4 = 0x2f8;
    FUN_004e4500("Bad model!");
    pcVar1 = pcVar3 + param_2;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    return pcVar3;
  }
  pcVar1 = pcVar3 + param_2;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return pcVar3;
}
