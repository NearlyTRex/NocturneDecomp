// Name: FUN_0054b710
// Address: 0054b710
// Address Range: [[0054b710, 0054b93a]]
// Convention: unknown
// Signature: void FUN_0054b710(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b710(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005c03c0(param_2,"// CScript version\n");
  FUN_005c03c0(param_2,&DAT_005f0185,6);
  FUN_005c03c0(param_2,"// gGame->letterboxMode\n");
  FUN_005c03c0(param_2,&DAT_005f01a2,*(uint *)(0x01CCF390 + 0x244));
  FUN_005c03c0(param_2,"// gGame->allowDamageFlag\n");
  FUN_005c03c0(param_2,&DAT_005f01c1,*(uint *)(0x01CCF390 + 0x248));
  FUN_005c03c0(param_2,"// gGame->allowEnemyAttackFlag\n");
  FUN_005c03c0(param_2,&DAT_005f01e5,*(uint *)(0x01CCF390 + 0x24c));
  FUN_005c03c0(param_2,"// letterBoxBlackT\n");
  FUN_005c03c0(param_2,&DAT_005f01fd,(double)_DAT_01e818b0);
  FUN_005c03c0(param_2,"// nextCmd\n");
  FUN_005c03c0(param_2,&DAT_005f020d,*(uint *)(param_1 + 0x44));
  FUN_005c03c0(param_2,"// currentMessage\n");
  FUN_005c03c0(param_2,"\"%s\"\n",param_1 + 0x50);
  FUN_005c03c0(param_2,"// cmdTimer\n");
  FUN_005c03c0(param_2,&DAT_005f0237,(double)*(float *)(param_1 + 0x48));
  FUN_005c03c0(param_2,"// dialogWavTime\n");
  FUN_005c03c0(param_2,&DAT_005f024d,(double)*(float *)(param_1 + 0x4c));
  FUN_005c03c0(param_2,"// whoIsSpeaking\n");
  FUN_0054b3a0(param_2,param_1 + 4);
  FUN_005c03c0(param_2,"// focusActor\n");
  FUN_0054b3a0(param_2,param_1 + 0xc);
  FUN_005c03c0(param_2,"// focusActorLocked\n");
  FUN_005c03c0(param_2,&DAT_005f0287,*(uint *)(param_1 + 0x14));
  FUN_005c03c0(param_2,"// callStack count, list\n");
  iVar3 = 0;
  FUN_005c03c0(param_2,&DAT_005f02a5,*(uint *)(param_1 + 0x458));
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x458)) {
    do {
      iVar3 = iVar3 + 1;
      FUN_005c03c0(param_2,&DAT_005f02a9,*(uint *)(iVar2 + 0x45c));
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x458));
  }
  FUN_005c03c0(param_2,"// CRC\n");
  uVar1 = FUN_0054b940();
  FUN_005c03c0(param_2,&DAT_005f02b5,uVar1);
  return;
}
