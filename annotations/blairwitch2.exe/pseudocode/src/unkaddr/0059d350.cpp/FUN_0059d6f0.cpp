// Name: unkaddr_0059d350.cpp_FUN_0059d6f0
// Address: 0059d6f0
// Address Range: [[0059d6f0, 0059d7eb]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059d350_cpp_FUN_0059d6f0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

uint unkaddr_0059d350_cpp_FUN_0059d6f0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x838) != 0x32) {
    pcVar3 = param_1 + *(int *)(param_1 + 0x838) * 0x20 + 0x210;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x838)) {
      pcVar3 = param_1 + 500;
      do {
        iVar2 = _strcmp(param_2,pcVar3);
        if (iVar2 == 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x20;
      } while (iVar4 < *(int *)(param_1 + 0x838));
    }
    iVar4 = 0;
    pcVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x834)) {
      do {
        iVar2 = _strcmp(param_3,pcVar3);
        if (iVar2 == 0) {
          *(char **)(param_1 + *(int *)(param_1 + 0x838) * 0x20 + 0x210) = pcVar3;
          break;
        }
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x19;
      } while (iVar4 < *(int *)(param_1 + 0x834));
    }
    if (*(int *)(param_1 + *(int *)(param_1 + 0x838) * 0x20 + 0x210) != 0) {
      pcVar3 = param_1 + *(int *)(param_1 + 0x838) * 0x20 + 500;
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
