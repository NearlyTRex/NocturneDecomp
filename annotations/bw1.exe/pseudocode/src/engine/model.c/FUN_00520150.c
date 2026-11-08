// Name: FUN_00520150
// Address: 00520150
// Address Range: [[00520150, 00520289]]
// Convention: unknown
// Signature: char * FUN_00520150(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00520150(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte local_60 [80];
  
  iVar2 = FUN_00479180("models",param_1,&DAT_005ea11a);
  if (iVar2 == 0) {
    FUN_005bfb40(local_60,"Unable to open model: %s",param_1);
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x2e4;
    FUN_005030e0(local_60);
  }
  pcVar3 = (char *)FUN_005c08d0(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    FUN_005bfb40(local_60,"Out of partial model mem : %s",param_1);
    _DAT_01d1d404 = 0x2ef;
    _DAT_01d1d400 = "..\\engine\\model.c";
    FUN_005030e0(local_60);
  }
  iVar4 = FUN_005c0b10(pcVar3,1,param_2,iVar2);
  if (iVar4 != param_2) {
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x2f4;
    FUN_005030e0("Model read hose");
  }
  FUN_005c0d10(iVar2);
  if ((*pcVar3 != '\x14') && (*pcVar3 != ' ')) {
    _DAT_01d1d400 = "..\\engine\\model.c";
    _DAT_01d1d404 = 0x2f8;
    FUN_005030e0("Bad model!");
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
