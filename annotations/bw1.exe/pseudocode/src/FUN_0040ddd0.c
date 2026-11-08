// Name: FUN_0040ddd0
// Address: 0040ddd0
// Address Range: [[0040ddd0, 0040dfcd]]
// Convention: unknown
// Signature: void FUN_0040ddd0(int param_1,char *param_2)

#include "nocturne.h"

void FUN_0040ddd0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x2d4);
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
  iVar2 = FUN_005c0f80(param_2,&DAT_005d307c);
  if (iVar2 == 0) {
    switch(*(uint *)(param_1 + 0x318)) {
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
      pcVar4 = "gatbullet.kfm";
      break;
    case 7:
      pcVar4 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar4 = "mercurybullet.kfm";
    }
    FUN_00468950(param_1 + 0x158,pcVar4);
  }
  iVar2 = FUN_005c0f80(param_2,"CShotgun");
  if (iVar2 == 0) {
    FUN_00468950(param_1 + 0x158,"shell.kfm");
  }
  iVar2 = FUN_005c0f80(param_2,"CCrossbow");
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x318) == 1) {
      pcVar4 = "holystake.kfm";
    }
    else {
      pcVar4 = "stake.kfm";
    }
    FUN_00468950(param_1 + 0x158,pcVar4);
  }
  iVar2 = FUN_005c0f80(param_2,"CDynamite");
  if (iVar2 == 0) {
    FUN_00468950(param_1 + 0x158,"dynamitebundle.kfm");
  }
  iVar2 = FUN_005c0f80(param_2,"CTommyGun");
  if (iVar2 == 0) {
    FUN_00468950(param_1 + 0x158,"tommybullet.kfm");
  }
  iVar2 = FUN_005c0f80(param_2,"CFlameThrower");
  if (iVar2 == 0) {
    FUN_00468950(param_1 + 0x158,"fgunammo.kfm");
  }
  iVar2 = FUN_005c0f80(param_2,"CElephantGun");
  if (iVar2 == 0) {
    FUN_00468950(param_1 + 0x158,"eleshell.kfm");
  }
  iVar2 = FUN_005c0f80(param_2,"CLightgun");
  if (iVar2 != 0) {
    FUN_004688e0(param_1 + 0x158);
    return;
  }
  FUN_00468950(param_1 + 0x158,"batterylarge.kfm");
  FUN_004688e0(param_1 + 0x158);
  return;
}
