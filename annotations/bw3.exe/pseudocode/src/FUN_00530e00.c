// Name: FUN_00530e00
// Address: 00530e00
// Address Range: [[00530e00, 0053102a]]
// Convention: unknown
// Signature: void FUN_00530e00(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530e00(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005a3140(param_2,"// CScript version\n");
  FUN_005a3140(param_2,&DAT_005cfe16,6);
  FUN_005a3140(param_2,"// gGame->letterboxMode\n");
  FUN_005a3140(param_2,&DAT_005cfe33,*(uint *)(0x01D2130C + 0x24c));
  FUN_005a3140(param_2,"// gGame->allowDamageFlag\n");
  FUN_005a3140(param_2,&DAT_005cfe52,*(uint *)(0x01D2130C + 0x250));
  FUN_005a3140(param_2,"// gGame->allowEnemyAttackFlag\n");
  FUN_005a3140(param_2,&DAT_005cfe76,*(uint *)(0x01D2130C + 0x254));
  FUN_005a3140(param_2,"// letterBoxBlackT\n");
  FUN_005a3140(param_2,&DAT_005cfe8e,(double)_DAT_01ed7010);
  FUN_005a3140(param_2,"// nextCmd\n");
  FUN_005a3140(param_2,&DAT_005cfe9e,*(uint *)(param_1 + 0x44));
  FUN_005a3140(param_2,"// currentMessage\n");
  FUN_005a3140(param_2,"\"%s\"\n",param_1 + 0x50);
  FUN_005a3140(param_2,"// cmdTimer\n");
  FUN_005a3140(param_2,&DAT_005cfec8,(double)*(float *)(param_1 + 0x48));
  FUN_005a3140(param_2,"// dialogWavTime\n");
  FUN_005a3140(param_2,&DAT_005cfede,(double)*(float *)(param_1 + 0x4c));
  FUN_005a3140(param_2,"// whoIsSpeaking\n");
  FUN_00530a90(param_2,param_1 + 4);
  FUN_005a3140(param_2,"// focusActor\n");
  FUN_00530a90(param_2,param_1 + 0xc);
  FUN_005a3140(param_2,"// focusActorLocked\n");
  FUN_005a3140(param_2,&DAT_005cff18,*(uint *)(param_1 + 0x14));
  FUN_005a3140(param_2,"// callStack count, list\n");
  iVar3 = 0;
  FUN_005a3140(param_2,&DAT_005cff36,*(uint *)(param_1 + 0x458));
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x458)) {
    do {
      iVar3 = iVar3 + 1;
      FUN_005a3140(param_2,&DAT_005cff3a,*(uint *)(iVar2 + 0x45c));
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x458));
  }
  FUN_005a3140(param_2,"// CRC\n");
  uVar1 = FUN_00531030();
  FUN_005a3140(param_2,&DAT_005cff46,uVar1);
  return;
}
