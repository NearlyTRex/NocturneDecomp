// Name: FUN_0052a400
// Address: 0052a400
// Address Range: [[0052a400, 0052a62a]]
// Convention: unknown
// Signature: void FUN_0052a400(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052a400(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005b8010(param_2,"// CScript version\n");
  FUN_005b8010(param_2,&DAT_005e5161,6);
  FUN_005b8010(param_2,"// gGame->letterboxMode\n");
  FUN_005b8010(param_2,&DAT_005e517e,*(uint *)(0x01CB6900 + 0x244));
  FUN_005b8010(param_2,"// gGame->allowDamageFlag\n");
  FUN_005b8010(param_2,&DAT_005e519d,*(uint *)(0x01CB6900 + 0x248));
  FUN_005b8010(param_2,"// gGame->allowEnemyAttackFlag\n");
  FUN_005b8010(param_2,&DAT_005e51c1,*(uint *)(0x01CB6900 + 0x24c));
  FUN_005b8010(param_2,"// letterBoxBlackT\n");
  FUN_005b8010(param_2,&DAT_005e51d9,(double)_DAT_01e65900);
  FUN_005b8010(param_2,"// nextCmd\n");
  FUN_005b8010(param_2,&DAT_005e51e9,*(uint *)(param_1 + 0x44));
  FUN_005b8010(param_2,"// currentMessage\n");
  FUN_005b8010(param_2,"\"%s\"\n",param_1 + 0x50);
  FUN_005b8010(param_2,"// cmdTimer\n");
  FUN_005b8010(param_2,&DAT_005e5213,(double)*(float *)(param_1 + 0x48));
  FUN_005b8010(param_2,"// dialogWavTime\n");
  FUN_005b8010(param_2,&DAT_005e5229,(double)*(float *)(param_1 + 0x4c));
  FUN_005b8010(param_2,"// whoIsSpeaking\n");
  FUN_0052a090(param_2,param_1 + 4);
  FUN_005b8010(param_2,"// focusActor\n");
  FUN_0052a090(param_2,param_1 + 0xc);
  FUN_005b8010(param_2,"// focusActorLocked\n");
  FUN_005b8010(param_2,&DAT_005e5263,*(uint *)(param_1 + 0x14));
  FUN_005b8010(param_2,"// callStack count, list\n");
  iVar3 = 0;
  FUN_005b8010(param_2,&DAT_005e5281,*(uint *)(param_1 + 0x458));
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x458)) {
    do {
      iVar3 = iVar3 + 1;
      FUN_005b8010(param_2,&DAT_005e5285,*(uint *)(iVar2 + 0x45c));
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x458));
  }
  FUN_005b8010(param_2,"// CRC\n");
  uVar1 = FUN_0052a630();
  FUN_005b8010(param_2,&DAT_005e5291,uVar1);
  return;
}
