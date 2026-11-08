// Name: FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e77e]]
// Convention: unknown
// Signature: void FUN_0040e670(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e670(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x47c) != 0) {
    FUN_004dadb0(param_2,*(int *)(param_1 + 0x47c),1,0);
    *(uint *)(param_1 + 0x47c) = 0;
    *(uint *)(param_1 + 0x470) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x470) == 0) {
    return;
  }
  iVar2 = FUN_005b8be2(0x47c);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_0040ddb0(iVar2);
  }
  if (pcVar3 == (char *)0x0) {
    _DAT_01d046a0 = "..\\core\\ammobox.cpp";
    _DAT_01d046a4 = 0xa2;
    FUN_004e4500("Out of memory");
  }
  FUN_0040e240(pcVar3,param_1 + 0x430);
  FUN_0040e440(pcVar3,*(uint *)(param_1 + 0x470));
  *(uint *)(pcVar3 + 0x474) = *(uint *)(param_1 + 0x474);
  (**(code **)(*(int *)(pcVar3 + 0x2b0) + 8))(pcVar3);
  FUN_0040e240(pcVar3,param_1 + 0x430);
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
  FUN_004dadb0(param_2,pcVar3,1,0);
  *(uint *)(param_1 + 0x470) = 0;
  return;
}
