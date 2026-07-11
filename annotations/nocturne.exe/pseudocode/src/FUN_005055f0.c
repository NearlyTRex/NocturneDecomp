// Name: FUN_005055f0
// Address: 005055f0
// Address Range: [[005055f0, 0050581a]]
// Convention: unknown
// Signature: void FUN_005055f0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005055f0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005644f0(param_2,"// CScript version\n");
  FUN_005644f0(param_2,&DAT_0058fde9,6);
  FUN_005644f0(param_2,"// gGame->letterboxMode\n");
  FUN_005644f0(param_2,&DAT_0058fe06,*(uint *)(0x01C775EC + 0x228));
  FUN_005644f0(param_2,"// gGame->allowDamageFlag\n");
  FUN_005644f0(param_2,&DAT_0058fe25,*(uint *)(0x01C775EC + 0x22c));
  FUN_005644f0(param_2,"// gGame->allowEnemyAttackFlag\n");
  FUN_005644f0(param_2,&DAT_0058fe49,*(uint *)(0x01C775EC + 0x230));
  FUN_005644f0(param_2,"// letterBoxBlackT\n");
  FUN_005644f0(param_2,&DAT_0058fe61,(double)_DAT_01e56c20);
  FUN_005644f0(param_2,"// nextCmd\n");
  FUN_005644f0(param_2,&DAT_0058fe71,*(uint *)(param_1 + 0x40));
  FUN_005644f0(param_2,"// currentMessage\n");
  FUN_005644f0(param_2,"\"%s\"\n",param_1 + 0x4c);
  FUN_005644f0(param_2,"// cmdTimer\n");
  FUN_005644f0(param_2,&DAT_0058fe9b,(double)*(float *)(param_1 + 0x44));
  FUN_005644f0(param_2,"// dialogWavTime\n");
  FUN_005644f0(param_2,&DAT_0058feb1,(double)*(float *)(param_1 + 0x48));
  FUN_005644f0(param_2,"// whoIsSpeaking\n");
  FUN_00505280(param_2,param_1 + 4);
  FUN_005644f0(param_2,"// focusActor\n");
  FUN_00505280(param_2,param_1 + 0xc);
  FUN_005644f0(param_2,"// focusActorLocked\n");
  FUN_005644f0(param_2,&DAT_0058feeb,*(uint *)(param_1 + 0x14));
  FUN_005644f0(param_2,"// callStack count, list\n");
  iVar3 = 0;
  FUN_005644f0(param_2,&DAT_0058ff09,*(uint *)(param_1 + 0x454));
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x454)) {
    do {
      iVar3 = iVar3 + 1;
      FUN_005644f0(param_2,&DAT_0058ff0d,*(uint *)(iVar2 + 0x458));
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x454));
  }
  FUN_005644f0(param_2,"// CRC\n");
  uVar1 = FUN_00505820();
  FUN_005644f0(param_2,&DAT_0058ff19,uVar1);
  return;
}
