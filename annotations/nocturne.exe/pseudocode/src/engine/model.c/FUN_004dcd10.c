// Name: FUN_004dcd10
// Address: 004dcd10
// Address Range: [[004dcd10, 004dcedd]]
// Convention: unknown
// Signature: char * FUN_004dcd10(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_004dcd10(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte local_5c [80];
  
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004dcd36;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_004dcd36;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004dcd36:
  if (pcVar4 != (char *)0x0) {
    iVar1 = FUN_00565e20(pcVar4[1]);
    if (iVar1 == 0x54) {
      pcVar5 = (char *)FUN_0041a540(param_1);
      return pcVar5;
    }
  }
  iVar1 = FUN_004568c0("models",param_1);
  if (iVar1 == 0) {
    FUN_00563c90(local_5c,"Unable to get file size: %s",param_1);
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0xf0;
    FUN_004c8440(local_5c);
  }
  iVar2 = FUN_00456a60("models",param_1,&DAT_0058a529);
  if (iVar2 == 0) {
    FUN_00563c90(local_5c,"Unable to open model: %s",param_1);
    _DAT_01cc4804 = 0xf5;
    _DAT_01cc4800 = "..\\engine\\model.c";
    FUN_004c8440(local_5c);
  }
  pcVar5 = (char *)FUN_005635b0(iVar1);
  if (pcVar5 == (char *)0x0) {
    FUN_00563c90(local_5c,"Out of model memory: %s",param_1);
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0x100;
    FUN_004c8440(local_5c);
  }
  iVar3 = FUN_005636d0(pcVar5,1,iVar1,iVar2);
  if (iVar3 != iVar1) {
    FUN_00563c90(local_5c,"Model file read error: %s",param_1);
    _DAT_01cc4804 = 0x107;
    _DAT_01cc4800 = "..\\engine\\model.c";
    FUN_004c8440(local_5c);
  }
  FUN_00563380(iVar2);
  if ((*pcVar5 != '\x14') && (*pcVar5 != ' ')) {
    FUN_00563c90(local_5c,"Invalid model: %s",param_1);
    _DAT_01cc4800 = "..\\engine\\model.c";
    _DAT_01cc4804 = 0x10d;
    FUN_004c8440(local_5c);
  }
  return pcVar5;
}
