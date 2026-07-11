// Name: FUN_0040f1a0
// Address: 0040f1a0
// Address Range: [[0040f1a0, 0040f2a9]]
// Convention: unknown
// Signature: void FUN_0040f1a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f1a0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x318) != 0) {
    FUN_004bf360(param_2,*(int *)(param_1 + 0x318),1);
    *(uint *)(param_1 + 0x318) = 0;
    *(uint *)(param_1 + 0x30c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x30c) == 0) {
    return;
  }
  iVar2 = FUN_0056497c(0x314);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_0040eb70(iVar2);
  }
  if (pcVar3 == (char *)0x0) {
    _DAT_01cc4800 = "..\\core\\ammobox.cpp";
    _DAT_01cc4804 = 0xa2;
    FUN_004c8440("Out of memory");
  }
  FUN_0040ed80(pcVar3,param_1 + 0x2cc);
  FUN_0040ef60(pcVar3,*(uint *)(param_1 + 0x30c));
  *(uint *)(pcVar3 + 0x310) = *(uint *)(param_1 + 0x310);
  (*(code *)**(uint **)(pcVar3 + 0x14c))(pcVar3);
  FUN_0040ed80(pcVar3,param_1 + 0x2cc);
  pcVar4 = "Some_ammo";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004bf360(param_2,pcVar3,1);
  *(uint *)(param_1 + 0x30c) = 0;
  return;
}
