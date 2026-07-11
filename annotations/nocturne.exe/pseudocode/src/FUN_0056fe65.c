// Name: FUN_0056fe65
// Address: 0056fe65
// Address Range: [[0056fe65, 0056ff29]]
// Convention: unknown
// Signature: void FUN_0056fe65(int param_1,char *param_2,int param_3,char *param_4)

#include "nocturne.h"

void FUN_0056fe65(int param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x34) = 0x20;
  *(uint *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8;
  if (param_2 == (char *)0x0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 2;
    return;
  }
  if (param_3 < 1) {
    if (param_3 != 0) {
      pcVar5 = param_2 + 0x200;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
      goto LAB_0056feab;
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = ~uVar3 - 1;
  }
  pcVar5 = param_2 + param_3;
LAB_0056feab:
  FUN_00571df8(param_1,param_2,pcVar5,0);
  if (((param_4 == (char *)0x0) || (param_4 < param_2)) ||
     ((pcVar2 = param_2, pcVar4 = pcVar5, pcVar5 <= param_4 &&
      ((*(byte *)(param_1 + 0x3c) & 4) == 0)))) {
    param_4 = (char *)0x0;
    pcVar2 = (char *)0x0;
    pcVar4 = (char *)0x0;
  }
  *(char **)(param_1 + 0xc) = param_2;
  *(char **)(param_1 + 0x14) = param_2;
  *(char **)(param_1 + 0x10) = pcVar5;
  *(char **)(param_1 + 0x18) = pcVar2;
  *(char **)(param_1 + 0x20) = pcVar2;
  *(char **)(param_1 + 0x1c) = pcVar4;
  if (pcVar2 < param_4) {
    *(char **)(param_1 + 0x20) = param_4 + (*(int *)(param_1 + 0x20) - (int)pcVar2);
    return;
  }
  return;
}
