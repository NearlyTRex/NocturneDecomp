// Name: FUN_004f89a0
// Address: 004f89a0
// Address Range: [[004f89a0, 004f8ad9]]
// Convention: unknown
// Signature: char * FUN_004f89a0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_004f89a0(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte local_60 [80];
  
  iVar2 = FUN_004659c0("models",param_1,&DAT_005c90c0);
  if (iVar2 == 0) {
    FUN_005a28c0(local_60,"Unable to open model: %s",param_1);
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2e4;
    FUN_004e4330(local_60);
  }
  pcVar3 = (char *)FUN_005a3650(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    FUN_005a28c0(local_60,"Out of partial model mem : %s",param_1);
    _DAT_01d71de4 = 0x2ef;
    _DAT_01d71de0 = "..\\engine\\model.c";
    FUN_004e4330(local_60);
  }
  iVar4 = FUN_005a3890(pcVar3,1,param_2,iVar2);
  if (iVar4 != param_2) {
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2f4;
    FUN_004e4330("Model read hose");
  }
  FUN_005a3a90(iVar2);
  if ((*pcVar3 != '\x14') && (*pcVar3 != ' ')) {
    _DAT_01d71de0 = "..\\engine\\model.c";
    _DAT_01d71de4 = 0x2f8;
    FUN_004e4330("Bad model!");
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
