// Name: FUN_0059d6f0
// Address: 0059d6f0
// Address Range: [[0059d6f0, 0059d7eb]]
// Convention: unknown
// Signature: undefined4 FUN_0059d6f0(int param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0059d6f0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x838) != 0x32) {
    *(uint *)(*(int *)(param_1 + 0x838) * 0x20 + 0x210 + param_1) = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x838)) {
      iVar4 = param_1 + 500;
      do {
        iVar2 = FUN_005b8c30(param_2,iVar4);
        if (iVar2 == 0) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar5 < *(int *)(param_1 + 0x838));
    }
    iVar4 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x834)) {
      do {
        iVar2 = FUN_005b8c30(param_3,iVar5);
        if (iVar2 == 0) {
          *(int *)(*(int *)(param_1 + 0x838) * 0x20 + 0x210 + param_1) = iVar5;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x19;
      } while (iVar4 < *(int *)(param_1 + 0x834));
    }
    iVar5 = *(int *)(param_1 + 0x838) * 0x20;
    if (*(int *)(iVar5 + param_1 + 0x210) != 0) {
      pcVar3 = (char *)(iVar5 + param_1 + 500);
      do {
        cVar1 = *param_2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + 1;
      return 2;
    }
  }
  return 0;
}
