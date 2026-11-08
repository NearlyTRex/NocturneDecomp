// Name: FUN_0040e240
// Address: 0040e240
// Address Range: [[0040e240, 0040e43d]]
// Convention: unknown
// Signature: void FUN_0040e240(int param_1,char *param_2)

#include "nocturne.h"

void FUN_0040e240(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x430);
  pcVar3 = param_2;
  if (pcVar4 != param_2) {
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  iVar2 = FUN_005b8c30(param_2,&DAT_005cb10b);
  if (iVar2 == 0) {
    switch(*(uint *)(param_1 + 0x474)) {
    case 1:
      pcVar4 = "holybullet.kfm";
      break;
    case 2:
      pcVar4 = "woodbullet.kfm";
      break;
    case 3:
      pcVar4 = "silverbullet.kfm";
      break;
    case 4:
      pcVar4 = "goldbullet.kfm";
      break;
    default:
      pcVar4 = "bullets6_1.kfm";
      break;
    case 7:
      pcVar4 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar4 = "mercurybullet.kfm";
    }
    FUN_0044fd70(param_1 + 0x2b4,pcVar4);
  }
  iVar2 = FUN_005b8c30(param_2,"CShotgun");
  if (iVar2 == 0) {
    FUN_0044fd70(param_1 + 0x2b4,"shell.kfm");
  }
  iVar2 = FUN_005b8c30(param_2,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x474) == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    FUN_0044fd70(param_1 + 0x2b4,pcVar4);
  }
  iVar2 = FUN_005b8c30(param_2,"CDynamite");
  if (iVar2 == 0) {
    FUN_0044fd70(param_1 + 0x2b4,"dynamitebundle.kfm");
  }
  iVar2 = FUN_005b8c30(param_2,"CTommyGun");
  if (iVar2 == 0) {
    FUN_0044fd70(param_1 + 0x2b4,"tommybullet.kfm");
  }
  iVar2 = FUN_005b8c30(param_2,"CFlameThrower");
  if (iVar2 == 0) {
    FUN_0044fd70(param_1 + 0x2b4,"fgunammo.kfm");
  }
  iVar2 = FUN_005b8c30(param_2,"CElephantGun");
  if (iVar2 == 0) {
    FUN_0044fd70(param_1 + 0x2b4,"eleshell.kfm");
  }
  iVar2 = FUN_005b8c30(param_2,"CLightgun");
  if (iVar2 != 0) {
    FUN_0044fd00(param_1 + 0x2b4);
    return;
  }
  FUN_0044fd70(param_1 + 0x2b4,"batterylarge.kfm");
  FUN_0044fd00(param_1 + 0x2b4);
  return;
}
