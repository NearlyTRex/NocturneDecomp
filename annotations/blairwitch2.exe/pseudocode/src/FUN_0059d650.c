// Name: FUN_0059d650
// Address: 0059d650
// Address Range: [[0059d650, 0059d6e5]]
// Convention: unknown
// Signature: undefined4 FUN_0059d650(int param_1,char *param_2)

#include "nocturne.h"

uint FUN_0059d650(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x834) == 0x14) {
    return 0;
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x834)) {
    do {
      iVar2 = FUN_005b8c30(param_2,iVar4);
      if (iVar2 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x19;
    } while (iVar3 < *(int *)(param_1 + 0x834));
  }
  pcVar5 = (char *)(param_1 + *(int *)(param_1 + 0x834) * 0x19);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + 1;
  return 2;
}
