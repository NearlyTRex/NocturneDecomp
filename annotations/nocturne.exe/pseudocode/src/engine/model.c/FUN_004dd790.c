// Name: FUN_004dd790
// Address: 004dd790
// Address Range: [[004dd790, 004dd8c7]]
// Convention: unknown
// Signature: char * FUN_004dd790(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_004dd790(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte local_60 [80];
  
  iVar2 = FUN_00456a60("models",param_1,&DAT_0058a661);
  if (iVar2 == 0) {
    FUN_00563c90(local_60,"Unable to open model: %s",param_1);
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0x2e3;
    FUN_004c8440(local_60);
  }
  pcVar3 = (char *)FUN_005635b0(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    FUN_00563c90(local_60,"Out of partial model mem : %s",param_1);
    _DAT_01cc4804 = 0x2ee;
    _DAT_01cc4800 = "..\\engine\\model.c";
    FUN_004c8440(local_60);
  }
  iVar4 = FUN_005636d0(pcVar3,1,param_2,iVar2);
  if (iVar4 != param_2) {
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0x2f3;
    FUN_004c8440("Model read hose");
  }
  FUN_00563380(iVar2);
  if ((*pcVar3 != '\x14') && (*pcVar3 != ' ')) {
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0x2f6;
    FUN_004c8440("Bad model!");
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
